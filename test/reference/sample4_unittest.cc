



<!DOCTYPE html>
<html>
<head>
 <meta http-equiv="Content-Type" content="text/html; charset=UTF-8" >
 <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" >
 
 <meta name="ROBOTS" content="NOARCHIVE">
 
 <link rel="icon" type="image/vnd.microsoft.icon" href="http://www.gstatic.com/codesite/ph/images/phosting.ico">
 
 
 <script type="text/javascript">
 
 
 
 
 var codesite_token = "ABZ6GAdOfQN1EaJXDT2eh5ylbT0eVxrzKA:1421292944897";
 
 
 var CS_env = {"projectHomeUrl": "/p/googletest", "token": "ABZ6GAdOfQN1EaJXDT2eh5ylbT0eVxrzKA:1421292944897", "loggedInUserEmail": "Gabriel.wang5@gmail.com", "domainName": null, "profileUrl": "/u/116848778305603003776/", "assetVersionPath": "http://www.gstatic.com/codesite/ph/18133036155640238800", "relativeBaseUrl": "", "assetHostPath": "http://www.gstatic.com/codesite/ph", "projectName": "googletest"};
 var _gaq = _gaq || [];
 _gaq.push(
 ['siteTracker._setAccount', 'UA-18071-1'],
 ['siteTracker._trackPageview']);
 
 _gaq.push(
 ['projectTracker._setAccount', 'UA-4068653-1'],
 ['projectTracker._trackPageview']);
 
 (function() {
 var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
 ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
 (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(ga);
 })();
 
 </script>
 
 
 <title>sample4_unittest.cc - 
 googletest -
 
 
 Google C++ Testing Framework - Google Project Hosting
 </title>
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/18133036155640238800/css/core.css">
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/18133036155640238800/css/ph_detail.css" >
 
 
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/18133036155640238800/css/d_sb.css" >
 
 
 
<!--[if IE]>
 <link type="text/css" rel="stylesheet" href="http://www.gstatic.com/codesite/ph/18133036155640238800/css/d_ie.css" >
<![endif]-->
 <style type="text/css">
 .menuIcon.off { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -42px }
 .menuIcon.on { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 -28px }
 .menuIcon.down { background: no-repeat url(http://www.gstatic.com/codesite/ph/images/dropdown_sprite.gif) 0 0; }
 
 
 
  tr.inline_comment {
 background: #fff;
 vertical-align: top;
 }
 div.draft, div.published {
 padding: .3em;
 border: 1px solid #999; 
 margin-bottom: .1em;
 font-family: arial, sans-serif;
 max-width: 60em;
 }
 div.draft {
 background: #ffa;
 } 
 div.published {
 background: #e5ecf9;
 }
 div.published .body, div.draft .body {
 padding: .5em .1em .1em .1em;
 max-width: 60em;
 white-space: pre-wrap;
 white-space: -moz-pre-wrap;
 white-space: -pre-wrap;
 white-space: -o-pre-wrap;
 word-wrap: break-word;
 font-size: 1em;
 }
 div.draft .actions {
 margin-left: 1em;
 font-size: 90%;
 }
 div.draft form {
 padding: .5em .5em .5em 0;
 }
 div.draft textarea, div.published textarea {
 width: 95%;
 height: 10em;
 font-family: arial, sans-serif;
 margin-bottom: .5em;
 }

 
 .nocursor, .nocursor td, .cursor_hidden, .cursor_hidden td {
 background-color: white;
 height: 2px;
 }
 .cursor, .cursor td {
 background-color: darkblue;
 height: 2px;
 display: '';
 }
 
 
.list {
 border: 1px solid white;
 border-bottom: 0;
}

 
 </style>
</head>
<body class="t4">
<script type="text/javascript">
 window.___gcfg = {lang: 'en'};
 (function() 
 {var po = document.createElement("script");
 po.type = "text/javascript"; po.async = true;po.src = "https://apis.google.com/js/plusone.js";
 var s = document.getElementsByTagName("script")[0];
 s.parentNode.insertBefore(po, s);
 })();
</script>
<div class="headbg">

 <div id="gaia">
 

 <span>
 
 
 
 <a href="#" id="multilogin-dropdown" onclick="return false;"
 ><u><b>Gabriel.wang5@gmail.com</b></u> <small>&#9660;</small></a>
 
 
 | <a href="/u/116848778305603003776/" id="projects-dropdown" onclick="return false;"
 ><u>My favorites</u> <small>&#9660;</small></a>
 | <a href="/u/116848778305603003776/" onclick="_CS_click('/gb/ph/profile');"
 title="Profile, Updates, and Settings"
 ><u>Profile</u></a>
 | <a href="https://www.google.com/accounts/Logout?continue=http%3A%2F%2Fcode.google.com%2Fp%2Fgoogletest%2Fsource%2Fbrowse%2Ftrunk%2Fsamples%2Fsample4_unittest.cc" 
 onclick="_CS_click('/gb/ph/signout');"
 ><u>Sign out</u></a>
 
 </span>

 </div>

 <div class="gbh" style="left: 0pt;"></div>
 <div class="gbh" style="right: 0pt;"></div>
 
 
 <div style="height: 1px"></div>
<!--[if lte IE 7]>
<div style="text-align:center;">
Your version of Internet Explorer is not supported. Try a browser that
contributes to open source, such as <a href="http://www.firefox.com">Firefox</a>,
<a href="http://www.google.com/chrome">Google Chrome</a>, or
<a href="http://code.google.com/chrome/chromeframe/">Google Chrome Frame</a>.
</div>
<![endif]-->



 <table style="padding:0px; margin: 0px 0px 10px 0px; width:100%" cellpadding="0" cellspacing="0"
 itemscope itemtype="http://schema.org/CreativeWork">
 <tr style="height: 58px;">
 
 
 
 <td id="plogo">
 <link itemprop="url" href="/p/googletest">
 <a href="/p/googletest/">
 
 <img src="http://www.gstatic.com/codesite/ph/images/search-48.gif" alt="Logo" itemprop="image">
 
 </a>
 </td>
 
 <td style="padding-left: 0.5em">
 
 <div id="pname">
 <a href="/p/googletest/"><span itemprop="name">googletest</span></a>
 </div>
 
 <div id="psum">
 <a id="project_summary_link"
 href="/p/googletest/"><span itemprop="description">Google C++ Testing Framework</span></a>
 
 </div>
 
 
 </td>
 <td style="white-space:nowrap;text-align:right; vertical-align:bottom;">
 
 <form action="/hosting/search">
 <input size="30" name="q" value="" type="text">
 
 <input type="submit" name="projectsearch" value="Search projects" >
 </form>
 
 </tr>
 </table>

</div>

 
<div id="mt" class="gtb"> 
 <a href="/p/googletest/" class="tab ">Project&nbsp;Home</a>
 
 
 
 
 <a href="/p/googletest/downloads/list" class="tab ">Downloads</a>
 
 
 
 
 
 <a href="/p/googletest/w/list" class="tab ">Wiki</a>
 
 
 
 
 
 <a href="/p/googletest/issues/list"
 class="tab ">Issues</a>
 
 
 
 
 
 <a href="/p/googletest/source/checkout"
 class="tab active">Source</a>
 
 
 
 
 
 
 
 
 <div class=gtbc></div>
</div>
<table cellspacing="0" cellpadding="0" width="100%" align="center" border="0" class="st">
 <tr>
 
 
 
 
 
 
 <td class="subt">
 <div class="st2">
 <div class="isf">
 
 


 <span class="inst1"><a href="/p/googletest/source/checkout">Checkout</a></span> &nbsp;
 <span class="inst2"><a href="/p/googletest/source/browse/">Browse</a></span> &nbsp;
 <span class="inst3"><a href="/p/googletest/source/list">Changes</a></span> &nbsp;
 
 
 
 
 
 
 
 </form>
 <script type="text/javascript">
 
 function codesearchQuery(form) {
 var query = document.getElementById('q').value;
 if (query) { form.action += '%20' + query; }
 }
 </script>
 </div>
</div>

 </td>
 
 
 
 <td align="right" valign="top" class="bevel-right"></td>
 </tr>
</table>


<script type="text/javascript">
 var cancelBubble = false;
 function _go(url) { document.location = url; }
</script>
<div id="maincol"
 
>

 




<div class="expand">
<div id="colcontrol">
<style type="text/css">
 #file_flipper { white-space: nowrap; padding-right: 2em; }
 #file_flipper.hidden { display: none; }
 #file_flipper .pagelink { color: #0000CC; text-decoration: underline; }
 #file_flipper #visiblefiles { padding-left: 0.5em; padding-right: 0.5em; }
</style>
<table id="nav_and_rev" class="list"
 cellpadding="0" cellspacing="0" width="100%">
 <tr>
 
 <td nowrap="nowrap" class="src_crumbs src_nav" width="33%">
 <strong class="src_nav">Source path:&nbsp;</strong>
 <span id="crumb_root">
 
 <a href="/p/googletest/source/browse/">svn</a>/&nbsp;</span>
 <span id="crumb_links" class="ifClosed"><a href="/p/googletest/source/browse/trunk/">trunk</a><span class="sp">/&nbsp;</span><a href="/p/googletest/source/browse/trunk/samples/">samples</a><span class="sp">/&nbsp;</span>sample4_unittest.cc</span>
 
 


 </td>
 
 
 <td nowrap="nowrap" width="33%" align="center">
 <a href="/p/googletest/source/browse/trunk/samples/sample4_unittest.cc?edit=1"
 ><img src="http://www.gstatic.com/codesite/ph/images/pencil-y14.png"
 class="edit_icon">Edit file</a>
 </td>
 
 
 <td nowrap="nowrap" width="33%" align="right">
 <table cellpadding="0" cellspacing="0" style="font-size: 100%"><tr>
 
 
 <td class="flipper">
 <ul class="leftside">
 
 <li><a href="/p/googletest/source/browse/trunk/samples/sample4_unittest.cc?r=40" title="Previous">&lsaquo;r40</a></li>
 
 </ul>
 </td>
 
 <td class="flipper"><b>r704</b></td>
 
 </tr></table>
 </td> 
 </tr>
</table>

<div class="fc">
 
 
 
<style type="text/css">
.undermouse span {
 background-image: url(http://www.gstatic.com/codesite/ph/images/comments.gif); }
</style>
<table class="opened" id="review_comment_area"
onmouseout="gutterOut()"><tr>
<td id="nums">
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
<pre><table width="100%" id="nums_table_0"><tr id="gr_svn704_1"

 onmouseover="gutterOver(1)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',1);">&nbsp;</span
></td><td id="1"><a href="#1">1</a></td></tr
><tr id="gr_svn704_2"

 onmouseover="gutterOver(2)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',2);">&nbsp;</span
></td><td id="2"><a href="#2">2</a></td></tr
><tr id="gr_svn704_3"

 onmouseover="gutterOver(3)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',3);">&nbsp;</span
></td><td id="3"><a href="#3">3</a></td></tr
><tr id="gr_svn704_4"

 onmouseover="gutterOver(4)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',4);">&nbsp;</span
></td><td id="4"><a href="#4">4</a></td></tr
><tr id="gr_svn704_5"

 onmouseover="gutterOver(5)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',5);">&nbsp;</span
></td><td id="5"><a href="#5">5</a></td></tr
><tr id="gr_svn704_6"

 onmouseover="gutterOver(6)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',6);">&nbsp;</span
></td><td id="6"><a href="#6">6</a></td></tr
><tr id="gr_svn704_7"

 onmouseover="gutterOver(7)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',7);">&nbsp;</span
></td><td id="7"><a href="#7">7</a></td></tr
><tr id="gr_svn704_8"

 onmouseover="gutterOver(8)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',8);">&nbsp;</span
></td><td id="8"><a href="#8">8</a></td></tr
><tr id="gr_svn704_9"

 onmouseover="gutterOver(9)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',9);">&nbsp;</span
></td><td id="9"><a href="#9">9</a></td></tr
><tr id="gr_svn704_10"

 onmouseover="gutterOver(10)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',10);">&nbsp;</span
></td><td id="10"><a href="#10">10</a></td></tr
><tr id="gr_svn704_11"

 onmouseover="gutterOver(11)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',11);">&nbsp;</span
></td><td id="11"><a href="#11">11</a></td></tr
><tr id="gr_svn704_12"

 onmouseover="gutterOver(12)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',12);">&nbsp;</span
></td><td id="12"><a href="#12">12</a></td></tr
><tr id="gr_svn704_13"

 onmouseover="gutterOver(13)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',13);">&nbsp;</span
></td><td id="13"><a href="#13">13</a></td></tr
><tr id="gr_svn704_14"

 onmouseover="gutterOver(14)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',14);">&nbsp;</span
></td><td id="14"><a href="#14">14</a></td></tr
><tr id="gr_svn704_15"

 onmouseover="gutterOver(15)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',15);">&nbsp;</span
></td><td id="15"><a href="#15">15</a></td></tr
><tr id="gr_svn704_16"

 onmouseover="gutterOver(16)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',16);">&nbsp;</span
></td><td id="16"><a href="#16">16</a></td></tr
><tr id="gr_svn704_17"

 onmouseover="gutterOver(17)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',17);">&nbsp;</span
></td><td id="17"><a href="#17">17</a></td></tr
><tr id="gr_svn704_18"

 onmouseover="gutterOver(18)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',18);">&nbsp;</span
></td><td id="18"><a href="#18">18</a></td></tr
><tr id="gr_svn704_19"

 onmouseover="gutterOver(19)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',19);">&nbsp;</span
></td><td id="19"><a href="#19">19</a></td></tr
><tr id="gr_svn704_20"

 onmouseover="gutterOver(20)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',20);">&nbsp;</span
></td><td id="20"><a href="#20">20</a></td></tr
><tr id="gr_svn704_21"

 onmouseover="gutterOver(21)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',21);">&nbsp;</span
></td><td id="21"><a href="#21">21</a></td></tr
><tr id="gr_svn704_22"

 onmouseover="gutterOver(22)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',22);">&nbsp;</span
></td><td id="22"><a href="#22">22</a></td></tr
><tr id="gr_svn704_23"

 onmouseover="gutterOver(23)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',23);">&nbsp;</span
></td><td id="23"><a href="#23">23</a></td></tr
><tr id="gr_svn704_24"

 onmouseover="gutterOver(24)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',24);">&nbsp;</span
></td><td id="24"><a href="#24">24</a></td></tr
><tr id="gr_svn704_25"

 onmouseover="gutterOver(25)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',25);">&nbsp;</span
></td><td id="25"><a href="#25">25</a></td></tr
><tr id="gr_svn704_26"

 onmouseover="gutterOver(26)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',26);">&nbsp;</span
></td><td id="26"><a href="#26">26</a></td></tr
><tr id="gr_svn704_27"

 onmouseover="gutterOver(27)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',27);">&nbsp;</span
></td><td id="27"><a href="#27">27</a></td></tr
><tr id="gr_svn704_28"

 onmouseover="gutterOver(28)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',28);">&nbsp;</span
></td><td id="28"><a href="#28">28</a></td></tr
><tr id="gr_svn704_29"

 onmouseover="gutterOver(29)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',29);">&nbsp;</span
></td><td id="29"><a href="#29">29</a></td></tr
><tr id="gr_svn704_30"

 onmouseover="gutterOver(30)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',30);">&nbsp;</span
></td><td id="30"><a href="#30">30</a></td></tr
><tr id="gr_svn704_31"

 onmouseover="gutterOver(31)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',31);">&nbsp;</span
></td><td id="31"><a href="#31">31</a></td></tr
><tr id="gr_svn704_32"

 onmouseover="gutterOver(32)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',32);">&nbsp;</span
></td><td id="32"><a href="#32">32</a></td></tr
><tr id="gr_svn704_33"

 onmouseover="gutterOver(33)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',33);">&nbsp;</span
></td><td id="33"><a href="#33">33</a></td></tr
><tr id="gr_svn704_34"

 onmouseover="gutterOver(34)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',34);">&nbsp;</span
></td><td id="34"><a href="#34">34</a></td></tr
><tr id="gr_svn704_35"

 onmouseover="gutterOver(35)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',35);">&nbsp;</span
></td><td id="35"><a href="#35">35</a></td></tr
><tr id="gr_svn704_36"

 onmouseover="gutterOver(36)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',36);">&nbsp;</span
></td><td id="36"><a href="#36">36</a></td></tr
><tr id="gr_svn704_37"

 onmouseover="gutterOver(37)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',37);">&nbsp;</span
></td><td id="37"><a href="#37">37</a></td></tr
><tr id="gr_svn704_38"

 onmouseover="gutterOver(38)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',38);">&nbsp;</span
></td><td id="38"><a href="#38">38</a></td></tr
><tr id="gr_svn704_39"

 onmouseover="gutterOver(39)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',39);">&nbsp;</span
></td><td id="39"><a href="#39">39</a></td></tr
><tr id="gr_svn704_40"

 onmouseover="gutterOver(40)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',40);">&nbsp;</span
></td><td id="40"><a href="#40">40</a></td></tr
><tr id="gr_svn704_41"

 onmouseover="gutterOver(41)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',41);">&nbsp;</span
></td><td id="41"><a href="#41">41</a></td></tr
><tr id="gr_svn704_42"

 onmouseover="gutterOver(42)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',42);">&nbsp;</span
></td><td id="42"><a href="#42">42</a></td></tr
><tr id="gr_svn704_43"

 onmouseover="gutterOver(43)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',43);">&nbsp;</span
></td><td id="43"><a href="#43">43</a></td></tr
><tr id="gr_svn704_44"

 onmouseover="gutterOver(44)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',44);">&nbsp;</span
></td><td id="44"><a href="#44">44</a></td></tr
><tr id="gr_svn704_45"

 onmouseover="gutterOver(45)"

><td><span title="Add comment" onclick="codereviews.startEdit('svn704',45);">&nbsp;</span
></td><td id="45"><a href="#45">45</a></td></tr
></table></pre>
<pre><table width="100%"><tr class="nocursor"><td></td></tr></table></pre>
</td>
<td id="lines">
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
<pre class="prettyprint lang-cc"><table id="src_table_0"><tr
id=sl_svn704_1

 onmouseover="gutterOver(1)"

><td class="source">// Copyright 2005, Google Inc.<br></td></tr
><tr
id=sl_svn704_2

 onmouseover="gutterOver(2)"

><td class="source">// All rights reserved.<br></td></tr
><tr
id=sl_svn704_3

 onmouseover="gutterOver(3)"

><td class="source">//<br></td></tr
><tr
id=sl_svn704_4

 onmouseover="gutterOver(4)"

><td class="source">// Redistribution and use in source and binary forms, with or without<br></td></tr
><tr
id=sl_svn704_5

 onmouseover="gutterOver(5)"

><td class="source">// modification, are permitted provided that the following conditions are<br></td></tr
><tr
id=sl_svn704_6

 onmouseover="gutterOver(6)"

><td class="source">// met:<br></td></tr
><tr
id=sl_svn704_7

 onmouseover="gutterOver(7)"

><td class="source">//<br></td></tr
><tr
id=sl_svn704_8

 onmouseover="gutterOver(8)"

><td class="source">//     * Redistributions of source code must retain the above copyright<br></td></tr
><tr
id=sl_svn704_9

 onmouseover="gutterOver(9)"

><td class="source">// notice, this list of conditions and the following disclaimer.<br></td></tr
><tr
id=sl_svn704_10

 onmouseover="gutterOver(10)"

><td class="source">//     * Redistributions in binary form must reproduce the above<br></td></tr
><tr
id=sl_svn704_11

 onmouseover="gutterOver(11)"

><td class="source">// copyright notice, this list of conditions and the following disclaimer<br></td></tr
><tr
id=sl_svn704_12

 onmouseover="gutterOver(12)"

><td class="source">// in the documentation and/or other materials provided with the<br></td></tr
><tr
id=sl_svn704_13

 onmouseover="gutterOver(13)"

><td class="source">// distribution.<br></td></tr
><tr
id=sl_svn704_14

 onmouseover="gutterOver(14)"

><td class="source">//     * Neither the name of Google Inc. nor the names of its<br></td></tr
><tr
id=sl_svn704_15

 onmouseover="gutterOver(15)"

><td class="source">// contributors may be used to endorse or promote products derived from<br></td></tr
><tr
id=sl_svn704_16

 onmouseover="gutterOver(16)"

><td class="source">// this software without specific prior written permission.<br></td></tr
><tr
id=sl_svn704_17

 onmouseover="gutterOver(17)"

><td class="source">//<br></td></tr
><tr
id=sl_svn704_18

 onmouseover="gutterOver(18)"

><td class="source">// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS<br></td></tr
><tr
id=sl_svn704_19

 onmouseover="gutterOver(19)"

><td class="source">// &quot;AS IS&quot; AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT<br></td></tr
><tr
id=sl_svn704_20

 onmouseover="gutterOver(20)"

><td class="source">// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR<br></td></tr
><tr
id=sl_svn704_21

 onmouseover="gutterOver(21)"

><td class="source">// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT<br></td></tr
><tr
id=sl_svn704_22

 onmouseover="gutterOver(22)"

><td class="source">// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,<br></td></tr
><tr
id=sl_svn704_23

 onmouseover="gutterOver(23)"

><td class="source">// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT<br></td></tr
><tr
id=sl_svn704_24

 onmouseover="gutterOver(24)"

><td class="source">// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,<br></td></tr
><tr
id=sl_svn704_25

 onmouseover="gutterOver(25)"

><td class="source">// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY<br></td></tr
><tr
id=sl_svn704_26

 onmouseover="gutterOver(26)"

><td class="source">// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT<br></td></tr
><tr
id=sl_svn704_27

 onmouseover="gutterOver(27)"

><td class="source">// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE<br></td></tr
><tr
id=sl_svn704_28

 onmouseover="gutterOver(28)"

><td class="source">// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.<br></td></tr
><tr
id=sl_svn704_29

 onmouseover="gutterOver(29)"

><td class="source">//<br></td></tr
><tr
id=sl_svn704_30

 onmouseover="gutterOver(30)"

><td class="source">// Author: wan@google.com (Zhanyong Wan)<br></td></tr
><tr
id=sl_svn704_31

 onmouseover="gutterOver(31)"

><td class="source"><br></td></tr
><tr
id=sl_svn704_32

 onmouseover="gutterOver(32)"

><td class="source">#include &quot;gtest/gtest.h&quot;<br></td></tr
><tr
id=sl_svn704_33

 onmouseover="gutterOver(33)"

><td class="source">#include &quot;sample4.h&quot;<br></td></tr
><tr
id=sl_svn704_34

 onmouseover="gutterOver(34)"

><td class="source"><br></td></tr
><tr
id=sl_svn704_35

 onmouseover="gutterOver(35)"

><td class="source">// Tests the Increment() method.<br></td></tr
><tr
id=sl_svn704_36

 onmouseover="gutterOver(36)"

><td class="source">TEST(Counter, Increment) {<br></td></tr
><tr
id=sl_svn704_37

 onmouseover="gutterOver(37)"

><td class="source">  Counter c;<br></td></tr
><tr
id=sl_svn704_38

 onmouseover="gutterOver(38)"

><td class="source"><br></td></tr
><tr
id=sl_svn704_39

 onmouseover="gutterOver(39)"

><td class="source">  // EXPECT_EQ() evaluates its arguments exactly once, so they<br></td></tr
><tr
id=sl_svn704_40

 onmouseover="gutterOver(40)"

><td class="source">  // can have side effects.<br></td></tr
><tr
id=sl_svn704_41

 onmouseover="gutterOver(41)"

><td class="source"><br></td></tr
><tr
id=sl_svn704_42

 onmouseover="gutterOver(42)"

><td class="source">  EXPECT_EQ(0, c.Increment());<br></td></tr
><tr
id=sl_svn704_43

 onmouseover="gutterOver(43)"

><td class="source">  EXPECT_EQ(1, c.Increment());<br></td></tr
><tr
id=sl_svn704_44

 onmouseover="gutterOver(44)"

><td class="source">  EXPECT_EQ(2, c.Increment());<br></td></tr
><tr
id=sl_svn704_45

 onmouseover="gutterOver(45)"

><td class="source">}<br></td></tr
></table></pre>
<pre><table width="100%"><tr class="cursor_stop cursor_hidden"><td></td></tr></table></pre>
</td>
</tr></table>

 
<script type="text/javascript">
 var lineNumUnderMouse = -1;
 
 function gutterOver(num) {
 gutterOut();
 var newTR = document.getElementById('gr_svn704_' + num);
 if (newTR) {
 newTR.className = 'undermouse';
 }
 lineNumUnderMouse = num;
 }
 function gutterOut() {
 if (lineNumUnderMouse != -1) {
 var oldTR = document.getElementById(
 'gr_svn704_' + lineNumUnderMouse);
 if (oldTR) {
 oldTR.className = '';
 }
 lineNumUnderMouse = -1;
 }
 }
 var numsGenState = {table_base_id: 'nums_table_'};
 var srcGenState = {table_base_id: 'src_table_'};
 var alignerRunning = false;
 var startOver = false;
 function setLineNumberHeights() {
 if (alignerRunning) {
 startOver = true;
 return;
 }
 numsGenState.chunk_id = 0;
 numsGenState.table = document.getElementById('nums_table_0');
 numsGenState.row_num = 0;
 if (!numsGenState.table) {
 return; // Silently exit if no file is present.
 }
 srcGenState.chunk_id = 0;
 srcGenState.table = document.getElementById('src_table_0');
 srcGenState.row_num = 0;
 alignerRunning = true;
 continueToSetLineNumberHeights();
 }
 function rowGenerator(genState) {
 if (genState.row_num < genState.table.rows.length) {
 var currentRow = genState.table.rows[genState.row_num];
 genState.row_num++;
 return currentRow;
 }
 var newTable = document.getElementById(
 genState.table_base_id + (genState.chunk_id + 1));
 if (newTable) {
 genState.chunk_id++;
 genState.row_num = 0;
 genState.table = newTable;
 return genState.table.rows[0];
 }
 return null;
 }
 var MAX_ROWS_PER_PASS = 1000;
 function continueToSetLineNumberHeights() {
 var rowsInThisPass = 0;
 var numRow = 1;
 var srcRow = 1;
 while (numRow && srcRow && rowsInThisPass < MAX_ROWS_PER_PASS) {
 numRow = rowGenerator(numsGenState);
 srcRow = rowGenerator(srcGenState);
 rowsInThisPass++;
 if (numRow && srcRow) {
 if (numRow.offsetHeight != srcRow.offsetHeight) {
 numRow.firstChild.style.height = srcRow.offsetHeight + 'px';
 }
 }
 }
 if (rowsInThisPass >= MAX_ROWS_PER_PASS) {
 setTimeout(continueToSetLineNumberHeights, 10);
 } else {
 alignerRunning = false;
 if (startOver) {
 startOver = false;
 setTimeout(setLineNumberHeights, 500);
 }
 }
 }
 function initLineNumberHeights() {
 // Do 2 complete passes, because there can be races
 // between this code and prettify.
 startOver = true;
 setTimeout(setLineNumberHeights, 250);
 window.onresize = setLineNumberHeights;
 }
 initLineNumberHeights();
</script>

 
 
 <div id="log">
 <div style="text-align:right">
 <a class="ifCollapse" href="#" onclick="_toggleMeta(this); return false">Show details</a>
 <a class="ifExpand" href="#" onclick="_toggleMeta(this); return false">Hide details</a>
 </div>
 <div class="ifExpand">
 
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="changelog">
 <p>Change log</p>
 <div>
 <a href="/p/googletest/source/detail?spec=svn704&amp;r=482">r482</a>
 by zhanyong.wan
 on Sep 13, 2010
 &nbsp; <a href="/p/googletest/source/diff?spec=svn704&r=482&amp;format=side&amp;path=/trunk/samples/sample4_unittest.cc&amp;old_path=/trunk/samples/sample4_unittest.cc&amp;old=40">Diff</a>
 </div>
 <pre>Include gtest headers as user headers
instead of system headers.
</pre>
 </div>
 
 
 
 
 
 
 <script type="text/javascript">
 var detail_url = '/p/googletest/source/detail?r=482&spec=svn704';
 var publish_url = '/p/googletest/source/detail?r=482&spec=svn704#publish';
 // describe the paths of this revision in javascript.
 var changed_paths = [];
 var changed_urls = [];
 
 changed_paths.push('/trunk/README');
 changed_urls.push('/p/googletest/source/browse/trunk/README?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/include/gtest/gtest-death-test.h');
 changed_urls.push('/p/googletest/source/browse/trunk/include/gtest/gtest-death-test.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/include/gtest/gtest-message.h');
 changed_urls.push('/p/googletest/source/browse/trunk/include/gtest/gtest-message.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/include/gtest/gtest-param-test.h');
 changed_urls.push('/p/googletest/source/browse/trunk/include/gtest/gtest-param-test.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/include/gtest/gtest-param-test.h.pump');
 changed_urls.push('/p/googletest/source/browse/trunk/include/gtest/gtest-param-test.h.pump?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/include/gtest/gtest-printers.h');
 changed_urls.push('/p/googletest/source/browse/trunk/include/gtest/gtest-printers.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/include/gtest/gtest-spi.h');
 changed_urls.push('/p/googletest/source/browse/trunk/include/gtest/gtest-spi.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/include/gtest/gtest-test-part.h');
 changed_urls.push('/p/googletest/source/browse/trunk/include/gtest/gtest-test-part.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/include/gtest/gtest-typed-test.h');
 changed_urls.push('/p/googletest/source/browse/trunk/include/gtest/gtest-typed-test.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/include/gtest/gtest.h');
 changed_urls.push('/p/googletest/source/browse/trunk/include/gtest/gtest.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/include/gtest/internal/gtest-death-test-internal.h');
 changed_urls.push('/p/googletest/source/browse/trunk/include/gtest/internal/gtest-death-test-internal.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/include/gtest/internal/gtest-filepath.h');
 changed_urls.push('/p/googletest/source/browse/trunk/include/gtest/internal/gtest-filepath.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/include/gtest/internal/gtest-internal.h');
 changed_urls.push('/p/googletest/source/browse/trunk/include/gtest/internal/gtest-internal.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/include/gtest/internal/gtest-linked_ptr.h');
 changed_urls.push('/p/googletest/source/browse/trunk/include/gtest/internal/gtest-linked_ptr.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/include/gtest/internal/gtest-param-util-generated.h');
 changed_urls.push('/p/googletest/source/browse/trunk/include/gtest/internal/gtest-param-util-generated.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/include/gtest/internal/gtest-param-util-generated.h.pump');
 changed_urls.push('/p/googletest/source/browse/trunk/include/gtest/internal/gtest-param-util-generated.h.pump?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/include/gtest/internal/gtest-param-util.h');
 changed_urls.push('/p/googletest/source/browse/trunk/include/gtest/internal/gtest-param-util.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/include/gtest/internal/gtest-port.h');
 changed_urls.push('/p/googletest/source/browse/trunk/include/gtest/internal/gtest-port.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/include/gtest/internal/gtest-string.h');
 changed_urls.push('/p/googletest/source/browse/trunk/include/gtest/internal/gtest-string.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/include/gtest/internal/gtest-type-util.h');
 changed_urls.push('/p/googletest/source/browse/trunk/include/gtest/internal/gtest-type-util.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/include/gtest/internal/gtest-type-util.h.pump');
 changed_urls.push('/p/googletest/source/browse/trunk/include/gtest/internal/gtest-type-util.h.pump?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/samples/sample10_unittest.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/samples/sample10_unittest.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/samples/sample1_unittest.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/samples/sample1_unittest.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/samples/sample2_unittest.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/samples/sample2_unittest.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/samples/sample3_unittest.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/samples/sample3_unittest.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/samples/sample4_unittest.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/samples/sample4_unittest.cc?r\x3d482\x26spec\x3dsvn704');
 
 var selected_path = '/trunk/samples/sample4_unittest.cc';
 
 
 changed_paths.push('/trunk/samples/sample5_unittest.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/samples/sample5_unittest.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/samples/sample6_unittest.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/samples/sample6_unittest.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/samples/sample7_unittest.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/samples/sample7_unittest.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/samples/sample8_unittest.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/samples/sample8_unittest.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/samples/sample9_unittest.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/samples/sample9_unittest.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/scripts/fuse_gtest_files.py');
 changed_urls.push('/p/googletest/source/browse/trunk/scripts/fuse_gtest_files.py?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/scripts/gen_gtest_pred_impl.py');
 changed_urls.push('/p/googletest/source/browse/trunk/scripts/gen_gtest_pred_impl.py?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/src/gtest-all.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/src/gtest-all.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/src/gtest-death-test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/src/gtest-death-test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/src/gtest-filepath.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/src/gtest-filepath.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/src/gtest-internal-inl.h');
 changed_urls.push('/p/googletest/source/browse/trunk/src/gtest-internal-inl.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/src/gtest-port.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/src/gtest-port.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/src/gtest-printers.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/src/gtest-printers.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/src/gtest-test-part.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/src/gtest-test-part.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/src/gtest-typed-test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/src/gtest-typed-test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/src/gtest.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/src/gtest.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/src/gtest_main.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/src/gtest_main.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest-death-test_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest-death-test_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest-filepath_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest-filepath_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest-linked_ptr_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest-linked_ptr_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest-listener_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest-listener_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest-message_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest-message_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest-options_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest-options_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest-param-test2_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest-param-test2_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest-param-test_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest-param-test_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest-param-test_test.h');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest-param-test_test.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest-port_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest-port_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest-printers_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest-printers_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest-test-part_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest-test-part_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest-tuple_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest-tuple_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest-typed-test2_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest-typed-test2_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest-typed-test_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest-typed-test_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest-typed-test_test.h');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest-typed-test_test.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest-unittest-api_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest-unittest-api_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_break_on_failure_unittest_.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_break_on_failure_unittest_.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_catch_exceptions_test_.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_catch_exceptions_test_.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_color_test_.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_color_test_.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_env_var_test_.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_env_var_test_.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_environment_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_environment_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_filter_unittest_.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_filter_unittest_.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_help_test_.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_help_test_.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_list_tests_unittest_.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_list_tests_unittest_.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_main_unittest.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_main_unittest.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_nc.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_nc.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_no_test_unittest.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_no_test_unittest.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_output_test_.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_output_test_.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_pred_impl_unittest.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_pred_impl_unittest.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_prod_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_prod_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_repeat_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_repeat_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_shuffle_test_.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_shuffle_test_.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_sole_header_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_sole_header_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_stress_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_stress_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_throw_on_failure_ex_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_throw_on_failure_ex_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_throw_on_failure_test_.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_throw_on_failure_test_.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_uninitialized_test_.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_uninitialized_test_.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_unittest.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_unittest.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_xml_outfile1_test_.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_xml_outfile1_test_.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_xml_outfile2_test_.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_xml_outfile2_test_.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/gtest_xml_output_unittest_.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/test/gtest_xml_output_unittest_.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/test/production.h');
 changed_urls.push('/p/googletest/source/browse/trunk/test/production.h?r\x3d482\x26spec\x3dsvn704');
 
 
 changed_paths.push('/trunk/xcode/Samples/FrameworkSample/widget_test.cc');
 changed_urls.push('/p/googletest/source/browse/trunk/xcode/Samples/FrameworkSample/widget_test.cc?r\x3d482\x26spec\x3dsvn704');
 
 
 function getCurrentPageIndex() {
 for (var i = 0; i < changed_paths.length; i++) {
 if (selected_path == changed_paths[i]) {
 return i;
 }
 }
 }
 function getNextPage() {
 var i = getCurrentPageIndex();
 if (i < changed_paths.length - 1) {
 return changed_urls[i + 1];
 }
 return null;
 }
 function getPreviousPage() {
 var i = getCurrentPageIndex();
 if (i > 0) {
 return changed_urls[i - 1];
 }
 return null;
 }
 function gotoNextPage() {
 var page = getNextPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoPreviousPage() {
 var page = getPreviousPage();
 if (!page) {
 page = detail_url;
 }
 window.location = page;
 }
 function gotoDetailPage() {
 window.location = detail_url;
 }
 function gotoPublishPage() {
 window.location = publish_url;
 }
</script>

 
 <style type="text/css">
 #review_nav {
 border-top: 3px solid white;
 padding-top: 6px;
 margin-top: 1em;
 }
 #review_nav td {
 vertical-align: middle;
 }
 #review_nav select {
 margin: .5em 0;
 }
 </style>
 <div id="review_nav">
 <table><tr><td>Go to:&nbsp;</td><td>
 <select name="files_in_rev" onchange="window.location=this.value">
 
 <option value="/p/googletest/source/browse/trunk/README?r=482&amp;spec=svn704"
 
 >/trunk/README</option>
 
 <option value="/p/googletest/source/browse/trunk/include/gtest/gtest-death-test.h?r=482&amp;spec=svn704"
 
 >...include/gtest/gtest-death-test.h</option>
 
 <option value="/p/googletest/source/browse/trunk/include/gtest/gtest-message.h?r=482&amp;spec=svn704"
 
 >...nk/include/gtest/gtest-message.h</option>
 
 <option value="/p/googletest/source/browse/trunk/include/gtest/gtest-param-test.h?r=482&amp;spec=svn704"
 
 >...include/gtest/gtest-param-test.h</option>
 
 <option value="/p/googletest/source/browse/trunk/include/gtest/gtest-param-test.h.pump?r=482&amp;spec=svn704"
 
 >...de/gtest/gtest-param-test.h.pump</option>
 
 <option value="/p/googletest/source/browse/trunk/include/gtest/gtest-printers.h?r=482&amp;spec=svn704"
 
 >...k/include/gtest/gtest-printers.h</option>
 
 <option value="/p/googletest/source/browse/trunk/include/gtest/gtest-spi.h?r=482&amp;spec=svn704"
 
 >/trunk/include/gtest/gtest-spi.h</option>
 
 <option value="/p/googletest/source/browse/trunk/include/gtest/gtest-test-part.h?r=482&amp;spec=svn704"
 
 >.../include/gtest/gtest-test-part.h</option>
 
 <option value="/p/googletest/source/browse/trunk/include/gtest/gtest-typed-test.h?r=482&amp;spec=svn704"
 
 >...include/gtest/gtest-typed-test.h</option>
 
 <option value="/p/googletest/source/browse/trunk/include/gtest/gtest.h?r=482&amp;spec=svn704"
 
 >/trunk/include/gtest/gtest.h</option>
 
 <option value="/p/googletest/source/browse/trunk/include/gtest/internal/gtest-death-test-internal.h?r=482&amp;spec=svn704"
 
 >...rnal/gtest-death-test-internal.h</option>
 
 <option value="/p/googletest/source/browse/trunk/include/gtest/internal/gtest-filepath.h?r=482&amp;spec=svn704"
 
 >.../gtest/internal/gtest-filepath.h</option>
 
 <option value="/p/googletest/source/browse/trunk/include/gtest/internal/gtest-internal.h?r=482&amp;spec=svn704"
 
 >.../gtest/internal/gtest-internal.h</option>
 
 <option value="/p/googletest/source/browse/trunk/include/gtest/internal/gtest-linked_ptr.h?r=482&amp;spec=svn704"
 
 >...test/internal/gtest-linked_ptr.h</option>
 
 <option value="/p/googletest/source/browse/trunk/include/gtest/internal/gtest-param-util-generated.h?r=482&amp;spec=svn704"
 
 >...nal/gtest-param-util-generated.h</option>
 
 <option value="/p/googletest/source/browse/trunk/include/gtest/internal/gtest-param-util-generated.h.pump?r=482&amp;spec=svn704"
 
 >...test-param-util-generated.h.pump</option>
 
 <option value="/p/googletest/source/browse/trunk/include/gtest/internal/gtest-param-util.h?r=482&amp;spec=svn704"
 
 >...test/internal/gtest-param-util.h</option>
 
 <option value="/p/googletest/source/browse/trunk/include/gtest/internal/gtest-port.h?r=482&amp;spec=svn704"
 
 >...lude/gtest/internal/gtest-port.h</option>
 
 <option value="/p/googletest/source/browse/trunk/include/gtest/internal/gtest-string.h?r=482&amp;spec=svn704"
 
 >...de/gtest/internal/gtest-string.h</option>
 
 <option value="/p/googletest/source/browse/trunk/include/gtest/internal/gtest-type-util.h?r=482&amp;spec=svn704"
 
 >...gtest/internal/gtest-type-util.h</option>
 
 <option value="/p/googletest/source/browse/trunk/include/gtest/internal/gtest-type-util.h.pump?r=482&amp;spec=svn704"
 
 >.../internal/gtest-type-util.h.pump</option>
 
 <option value="/p/googletest/source/browse/trunk/samples/sample10_unittest.cc?r=482&amp;spec=svn704"
 
 >/trunk/samples/sample10_unittest.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/samples/sample1_unittest.cc?r=482&amp;spec=svn704"
 
 >/trunk/samples/sample1_unittest.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/samples/sample2_unittest.cc?r=482&amp;spec=svn704"
 
 >/trunk/samples/sample2_unittest.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/samples/sample3_unittest.cc?r=482&amp;spec=svn704"
 
 >/trunk/samples/sample3_unittest.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/samples/sample4_unittest.cc?r=482&amp;spec=svn704"
 selected="selected"
 >/trunk/samples/sample4_unittest.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/samples/sample5_unittest.cc?r=482&amp;spec=svn704"
 
 >/trunk/samples/sample5_unittest.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/samples/sample6_unittest.cc?r=482&amp;spec=svn704"
 
 >/trunk/samples/sample6_unittest.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/samples/sample7_unittest.cc?r=482&amp;spec=svn704"
 
 >/trunk/samples/sample7_unittest.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/samples/sample8_unittest.cc?r=482&amp;spec=svn704"
 
 >/trunk/samples/sample8_unittest.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/samples/sample9_unittest.cc?r=482&amp;spec=svn704"
 
 >/trunk/samples/sample9_unittest.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/scripts/fuse_gtest_files.py?r=482&amp;spec=svn704"
 
 >/trunk/scripts/fuse_gtest_files.py</option>
 
 <option value="/p/googletest/source/browse/trunk/scripts/gen_gtest_pred_impl.py?r=482&amp;spec=svn704"
 
 >...k/scripts/gen_gtest_pred_impl.py</option>
 
 <option value="/p/googletest/source/browse/trunk/src/gtest-all.cc?r=482&amp;spec=svn704"
 
 >/trunk/src/gtest-all.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/src/gtest-death-test.cc?r=482&amp;spec=svn704"
 
 >/trunk/src/gtest-death-test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/src/gtest-filepath.cc?r=482&amp;spec=svn704"
 
 >/trunk/src/gtest-filepath.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/src/gtest-internal-inl.h?r=482&amp;spec=svn704"
 
 >/trunk/src/gtest-internal-inl.h</option>
 
 <option value="/p/googletest/source/browse/trunk/src/gtest-port.cc?r=482&amp;spec=svn704"
 
 >/trunk/src/gtest-port.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/src/gtest-printers.cc?r=482&amp;spec=svn704"
 
 >/trunk/src/gtest-printers.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/src/gtest-test-part.cc?r=482&amp;spec=svn704"
 
 >/trunk/src/gtest-test-part.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/src/gtest-typed-test.cc?r=482&amp;spec=svn704"
 
 >/trunk/src/gtest-typed-test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/src/gtest.cc?r=482&amp;spec=svn704"
 
 >/trunk/src/gtest.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/src/gtest_main.cc?r=482&amp;spec=svn704"
 
 >/trunk/src/gtest_main.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest-death-test_test.cc?r=482&amp;spec=svn704"
 
 >...nk/test/gtest-death-test_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest-filepath_test.cc?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest-filepath_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest-linked_ptr_test.cc?r=482&amp;spec=svn704"
 
 >...nk/test/gtest-linked_ptr_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest-listener_test.cc?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest-listener_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest-message_test.cc?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest-message_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest-options_test.cc?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest-options_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest-param-test2_test.cc?r=482&amp;spec=svn704"
 
 >...k/test/gtest-param-test2_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest-param-test_test.cc?r=482&amp;spec=svn704"
 
 >...nk/test/gtest-param-test_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest-param-test_test.h?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest-param-test_test.h</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest-port_test.cc?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest-port_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest-printers_test.cc?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest-printers_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest-test-part_test.cc?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest-test-part_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest-tuple_test.cc?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest-tuple_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest-typed-test2_test.cc?r=482&amp;spec=svn704"
 
 >...k/test/gtest-typed-test2_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest-typed-test_test.cc?r=482&amp;spec=svn704"
 
 >...nk/test/gtest-typed-test_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest-typed-test_test.h?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest-typed-test_test.h</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest-unittest-api_test.cc?r=482&amp;spec=svn704"
 
 >.../test/gtest-unittest-api_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_break_on_failure_unittest_.cc?r=482&amp;spec=svn704"
 
 >...st_break_on_failure_unittest_.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_catch_exceptions_test_.cc?r=482&amp;spec=svn704"
 
 >.../gtest_catch_exceptions_test_.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_color_test_.cc?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest_color_test_.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_env_var_test_.cc?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest_env_var_test_.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_environment_test.cc?r=482&amp;spec=svn704"
 
 >...k/test/gtest_environment_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_filter_unittest_.cc?r=482&amp;spec=svn704"
 
 >...k/test/gtest_filter_unittest_.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_help_test_.cc?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest_help_test_.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_list_tests_unittest_.cc?r=482&amp;spec=svn704"
 
 >...st/gtest_list_tests_unittest_.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_main_unittest.cc?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest_main_unittest.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_nc.cc?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest_nc.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_no_test_unittest.cc?r=482&amp;spec=svn704"
 
 >...k/test/gtest_no_test_unittest.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_output_test_.cc?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest_output_test_.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_pred_impl_unittest.cc?r=482&amp;spec=svn704"
 
 >...test/gtest_pred_impl_unittest.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_prod_test.cc?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest_prod_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_repeat_test.cc?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest_repeat_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_shuffle_test_.cc?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest_shuffle_test_.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_sole_header_test.cc?r=482&amp;spec=svn704"
 
 >...k/test/gtest_sole_header_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_stress_test.cc?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest_stress_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_throw_on_failure_ex_test.cc?r=482&amp;spec=svn704"
 
 >...test_throw_on_failure_ex_test.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_throw_on_failure_test_.cc?r=482&amp;spec=svn704"
 
 >.../gtest_throw_on_failure_test_.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_uninitialized_test_.cc?r=482&amp;spec=svn704"
 
 >...est/gtest_uninitialized_test_.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_unittest.cc?r=482&amp;spec=svn704"
 
 >/trunk/test/gtest_unittest.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_xml_outfile1_test_.cc?r=482&amp;spec=svn704"
 
 >...test/gtest_xml_outfile1_test_.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_xml_outfile2_test_.cc?r=482&amp;spec=svn704"
 
 >...test/gtest_xml_outfile2_test_.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/gtest_xml_output_unittest_.cc?r=482&amp;spec=svn704"
 
 >...st/gtest_xml_output_unittest_.cc</option>
 
 <option value="/p/googletest/source/browse/trunk/test/production.h?r=482&amp;spec=svn704"
 
 >/trunk/test/production.h</option>
 
 <option value="/p/googletest/source/browse/trunk/xcode/Samples/FrameworkSample/widget_test.cc?r=482&amp;spec=svn704"
 
 >...s/FrameworkSample/widget_test.cc</option>
 
 </select>
 </td></tr></table>
 
 
 <div id="review_instr" class="closed">
 <a class="ifOpened" href="/p/googletest/source/detail?r=482&spec=svn704#publish">Publish your comments</a>
 <div class="ifClosed">Double click a line to add a comment</div>
 </div>
 
 </div>
 
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="older_bubble">
 <p>Older revisions</p>
 
 
 <div class="closed" style="margin-bottom:3px;" >
 <a class="ifClosed" onclick="return _toggleHidden(this)"><img src="http://www.gstatic.com/codesite/ph/images/plus.gif" ></a>
 <a class="ifOpened" onclick="return _toggleHidden(this)"><img src="http://www.gstatic.com/codesite/ph/images/minus.gif" ></a>
 <a href="/p/googletest/source/detail?spec=svn704&r=40">r40</a>
 by shiqian
 on Jul 3, 2008
 &nbsp; <a href="/p/googletest/source/diff?spec=svn704&r=40&amp;format=side&amp;path=/trunk/samples/sample4_unittest.cc&amp;old_path=/trunk/samples/sample4_unittest.cc&amp;old=">Diff</a>
 <br>
 <pre class="ifOpened">Initial import.
</pre>
 </div>
 
 
 <a href="/p/googletest/source/list?path=/trunk/samples/sample4_unittest.cc&start=482">All revisions of this file</a>
 </div>
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 
 <div class="pmeta_bubble_bg" style="border:1px solid white">
 <div class="round4"></div>
 <div class="round2"></div>
 <div class="round1"></div>
 <div class="box-inner">
 <div id="fileinfo_bubble">
 <p>File info</p>
 
 <div>Size: 1909 bytes,
 45 lines</div>
 
 <div><a href="//googletest.googlecode.com/svn/trunk/samples/sample4_unittest.cc">View raw file</a></div>
 </div>
 
 </div>
 <div class="round1"></div>
 <div class="round2"></div>
 <div class="round4"></div>
 </div>
 </div>
 </div>


</div>

</div>
</div>

<script src="http://www.gstatic.com/codesite/ph/18133036155640238800/js/prettify/prettify.js"></script>
<script type="text/javascript">prettyPrint();</script>


<script src="http://www.gstatic.com/codesite/ph/18133036155640238800/js/source_file_scripts.js"></script>

 <script type="text/javascript" src="http://www.gstatic.com/codesite/ph/18133036155640238800/js/kibbles.js"></script>
 <script type="text/javascript">
 var lastStop = null;
 var initialized = false;
 
 function updateCursor(next, prev) {
 if (prev && prev.element) {
 prev.element.className = 'cursor_stop cursor_hidden';
 }
 if (next && next.element) {
 next.element.className = 'cursor_stop cursor';
 lastStop = next.index;
 }
 }
 
 function pubRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftRevealed(data) {
 updateCursorForCell(data.cellId, 'cursor_stop cursor_hidden');
 if (initialized) {
 reloadCursors();
 }
 }
 
 function draftDestroyed(data) {
 updateCursorForCell(data.cellId, 'nocursor');
 if (initialized) {
 reloadCursors();
 }
 }
 function reloadCursors() {
 kibbles.skipper.reset();
 loadCursors();
 if (lastStop != null) {
 kibbles.skipper.setCurrentStop(lastStop);
 }
 }
 // possibly the simplest way to insert any newly added comments
 // is to update the class of the corresponding cursor row,
 // then refresh the entire list of rows.
 function updateCursorForCell(cellId, className) {
 var cell = document.getElementById(cellId);
 // we have to go two rows back to find the cursor location
 var row = getPreviousElement(cell.parentNode);
 row.className = className;
 }
 // returns the previous element, ignores text nodes.
 function getPreviousElement(e) {
 var element = e.previousSibling;
 if (element.nodeType == 3) {
 element = element.previousSibling;
 }
 if (element && element.tagName) {
 return element;
 }
 }
 function loadCursors() {
 // register our elements with skipper
 var elements = CR_getElements('*', 'cursor_stop');
 var len = elements.length;
 for (var i = 0; i < len; i++) {
 var element = elements[i]; 
 element.className = 'cursor_stop cursor_hidden';
 kibbles.skipper.append(element);
 }
 }
 function toggleComments() {
 CR_toggleCommentDisplay();
 reloadCursors();
 }
 function keysOnLoadHandler() {
 // setup skipper
 kibbles.skipper.addStopListener(
 kibbles.skipper.LISTENER_TYPE.PRE, updateCursor);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_top', 50);
 // Set the 'offset' option to return the middle of the client area
 // an option can be a static value, or a callback
 kibbles.skipper.setOption('padding_bottom', 100);
 // Register our keys
 kibbles.skipper.addFwdKey("n");
 kibbles.skipper.addRevKey("p");
 kibbles.keys.addKeyPressListener(
 'u', function() { window.location = detail_url; });
 kibbles.keys.addKeyPressListener(
 'r', function() { window.location = detail_url + '#publish'; });
 
 kibbles.keys.addKeyPressListener('j', gotoNextPage);
 kibbles.keys.addKeyPressListener('k', gotoPreviousPage);
 
 
 kibbles.keys.addKeyPressListener('h', toggleComments);
 
 }
 </script>
<script src="http://www.gstatic.com/codesite/ph/18133036155640238800/js/code_review_scripts.js"></script>
<script type="text/javascript">
 function showPublishInstructions() {
 var element = document.getElementById('review_instr');
 if (element) {
 element.className = 'opened';
 }
 }
 var codereviews;
 function revsOnLoadHandler() {
 // register our source container with the commenting code
 var paths = {'svn704': '/trunk/samples/sample4_unittest.cc'}
 codereviews = CR_controller.setup(
 {"projectHomeUrl": "/p/googletest", "token": "ABZ6GAdOfQN1EaJXDT2eh5ylbT0eVxrzKA:1421292944897", "loggedInUserEmail": "Gabriel.wang5@gmail.com", "domainName": null, "profileUrl": "/u/116848778305603003776/", "assetVersionPath": "http://www.gstatic.com/codesite/ph/18133036155640238800", "relativeBaseUrl": "", "assetHostPath": "http://www.gstatic.com/codesite/ph", "projectName": "googletest"}, '', 'svn704', paths,
 CR_BrowseIntegrationFactory);
 
 // register our source container with the commenting code
 // in this case we're registering the container and the revison
 // associated with the contianer which may be the primary revision
 // or may be a previous revision against which the primary revision
 // of the file is being compared.
 codereviews.registerSourceContainer(document.getElementById('lines'), 'svn704');
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, showPublishInstructions);
 
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_PUB_PLATE, pubRevealed);
 codereviews.registerActivityListener(CR_ActivityType.REVEAL_DRAFT_PLATE, draftRevealed);
 codereviews.registerActivityListener(CR_ActivityType.DISCARD_DRAFT_COMMENT, draftDestroyed);
 
 
 
 
 
 
 
 var initialized = true;
 reloadCursors();
 }
 window.onload = function() {keysOnLoadHandler(); revsOnLoadHandler();};

</script>
<script type="text/javascript" src="http://www.gstatic.com/codesite/ph/18133036155640238800/js/dit_scripts.js"></script>

 
 
 
 <script type="text/javascript" src="http://www.gstatic.com/codesite/ph/18133036155640238800/js/ph_core.js"></script>
 
 
 
 
</div> 

<div id="footer" dir="ltr">
 <div class="text">
 <a href="/projecthosting/terms.html">Terms</a> -
 <a href="http://www.google.com/privacy.html">Privacy</a> -
 <a href="/p/support/">Project Hosting Help</a>
 </div>
</div>
 <div class="hostedBy" style="margin-top: -20px;">
 <span style="vertical-align: top;">Powered by <a href="http://code.google.com/projecthosting/">Google Project Hosting</a></span>
 </div>

 
 


 
 </body>
</html>

