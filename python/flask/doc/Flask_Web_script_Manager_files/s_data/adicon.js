var mediav=window.mediav||{};mediav.$version="1.0.7";mediav.meover=function(){var c=arguments[0];var d=arguments[1];document.getElementById(c).style.display="none";document.getElementById(d).style.display=""};mediav.meout=function(){var c=arguments[0];var d=arguments[1];document.getElementById(c).style.display="";document.getElementById(d).style.display="none"};mediav.createIcon=function(c,q,b,m){var d=c||"max";var b=b||"1";var m=m||"http://e.360.cn/static/contact/reg-new.html?src=dj_banner_icon";var p="https://material.mediav.com/bjjs/dsp/ad.png";var r="https://material.mediav.com/bjjs/dsp/mediav1.png";var e=32,i=14,j=76,s=14;if(d=="max"){p="https://material.mediav.com/bjjs/dsp/ad.png";r="https://material.mediav.com/bjjs/dsp/360ad.png";e=32,i=14,j=64,s=14}var f="position: absolute; right: 0px; bottom: 0px; z-index: 100; width: "+e+"px; height: "+i+"px;";var h="position: absolute; right: 0px; bottom: 0px; z-index: 100; width: "+j+"px; height: "+s+"px; display:none";var q=q||(new Date()-0);var l="ad_icon_"+q;var k="ad2_icon_"+q;var o=document.createElement("img");o.src=p;o.id=l;o.border=0;o.style.cssText=f;o.onmouseover=function(){mediav.meover(l,k)};var n=document.createElement("img");n.src=r;n.id=k;n.border=0;n.style.cssText=h;n.onmouseout=function(){mediav.meout(l,k)};var t=document.createElement("a");if(b==="1"){t.target="_blank";t.href=m}t.appendChild(o);t.appendChild(n);var g=(new Date()).valueOf();var u=setInterval(function(){var w=document.getElementById("banner_"+q),v=(new Date()).valueOf(),y=10000,a=null;if(w!==null){w.appendChild(t)}else{var x=window["mvas_"+q]?window["mvas_"+q]:"0";w=document.getElementById("banner_"+x);(w&&w.appendChild(t))}a=document.getElementById(l);if(!!a||(v-g)>=y){window.clearInterval(u)}},100)};