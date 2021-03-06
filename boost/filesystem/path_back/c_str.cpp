#include <cstdio>
#include <locale>
#include <clocale>
#include <fstream>
#include <iostream>
#include "boost/filesystem.hpp"
namespace fs = boost::filesystem;

int main()
{
    std::setlocale(LC_ALL, "");
    std::locale::global(std::locale(""));
    std::cout.imbue(std::locale());
    std::wcerr.imbue(std::locale());

    fs::path p = "要らない.txt";
    std::ofstream(p.c_str()) << "File contents"; // 在 LWG2676 前 MSVC 上使用 operator string_type()
    // ，其中 string_type 是 wstring ，仅根据非标准扩展工作
    // LWG2676 后使用新的 fstream 构造函数

    // 原生字符串表示可用于 OS API
    if (std::FILE* f = std::fopen(p.c_str(), "r"))
    {
        int ch;
        while((ch=fgetc(f))!= EOF) putchar(ch);
        std::fclose(f);
    }

    // 多字节与宽字节表示可用于输出
    std::cout << "\nFile name in narrow multibyte encoding: " << p.string() << '\n';
    std::wcerr << "File name in wide encoding: " << p.wstring() << '\n';

    fs::remove(p);
    return 0;
}
