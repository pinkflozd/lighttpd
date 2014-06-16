<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="utf-8" />
<title>mod_geoip_for_1.5.c - Lighttpd - lighty labs</title>
<meta name="description" content="Redmine" />
<meta name="keywords" content="issue,bug,tracker" />
<meta content="authenticity_token" name="csrf-param" />
<meta content="TWIsZBQvGh0N4vNE/1ySPuu1Ua2XBci6CnD78jsq6oY=" name="csrf-token" />
<link rel='shortcut icon' href='/favicon.ico?1366732741' />
<link href="/stylesheets/jquery/jquery-ui-1.9.2.css?1358765966" media="all" rel="stylesheet" type="text/css" />
<link href="/themes/basecamp/stylesheets/application.css?1397128568" media="all" rel="stylesheet" type="text/css" />

<script src="/javascripts/jquery-1.8.3-ui-1.9.2-ujs-2.0.3.js?1358765965" type="text/javascript"></script>
<script src="/javascripts/application.js?1397128491" type="text/javascript"></script>
<script type="text/javascript">
//<![CDATA[
$(window).load(function(){ warnLeavingUnsaved('The current page contains unsaved text that will be lost if you leave this page.'); });
//]]>
</script>


<!-- page specific tags -->
    <link href="/stylesheets/scm.css?1397127559" media="screen" rel="stylesheet" type="text/css" /></head>
<body class="theme-Basecamp project-lighttpd controller-attachments action-show">
<div id="wrapper">
<div id="wrapper2">
<div id="wrapper3">
<div id="top-menu">
    <div id="account">
        <ul><li><a href="/login" class="login">Sign in</a></li>
<li><a href="/account/register" class="register">Register</a></li></ul>    </div>
    
    <ul><li><a href="/" class="home">Home</a></li>
<li><a href="/projects" class="projects">Projects</a></li>
<li><a href="/paypal_donation" class="paypal-donate">Donate</a></li>
<li><a href="http://www.redmine.org/guide" class="help">Help</a></li></ul></div>

<div id="header">
    <div id="quick-search">
        <form accept-charset="UTF-8" action="/projects/lighttpd/search" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
        
        <label for='q'>
          <a href="/projects/lighttpd/search" accesskey="4">Search</a>:
        </label>
        <input accesskey="f" class="small" id="q" name="q" size="20" type="text" />
</form>        
    </div>

    <h1>Lighttpd</h1>

    <div id="main-menu">
        <ul><li><a href="/projects/lighttpd" class="overview">Overview</a></li>
<li><a href="/projects/lighttpd/activity" class="activity">Activity</a></li>
<li><a href="/projects/lighttpd/roadmap" class="roadmap">Roadmap</a></li>
<li><a href="/projects/lighttpd/issues" class="issues">Issues</a></li>
<li><a href="/projects/lighttpd/wiki" class="wiki">Wiki</a></li>
<li><a href="/projects/lighttpd/boards" class="boards">Forums</a></li>
<li><a href="/projects/lighttpd/repository" class="repository">Repository</a></li>
<li><a href="//www.lighttpd.net" class="tab0">Blog</a></li>
<li><a href="//blog.lighttpd.net" class="tab1">Developer Blog</a></li></ul>
    </div>
</div>

<div id="main" class="">
    <div id="sidebar">
        
        <br /><br /><form action="https://www.paypal.com/cgi-bin/webscr" method="post">
<input type="hidden" name="cmd" value="_s-xclick">
<input type="hidden" name="hosted_button_id" value="S5M73CRHD873U">
<input type="image" src="/images/paypal/button_0.png" border="0" name="submit" alt="PayPal">
</form>
<br />
    </div>

    <div id="content">
        
        <h2>mod_geoip_for_1.5.c</h2>

<div class="attachments">
<p>mod_geoip for lighttpd 1.5 - 
   <span class="author"><a href="/users/255" class="user active">tobsn</a>, 2009-01-09 19:52</span></p>
<p><a href="/attachments/download/717/mod_geoip_for_1.5.c">Download</a>   <span class="size">(13 KB)</span></p>

</div>
&nbsp;
<div class="autoscroll">
<table class="filecontent syntaxhl">
<tbody>
  <tr id="L1">
    <th class="line-num">
      <a href="#L1">1</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#include</span> <span class="include">&lt;GeoIP.h&gt;</span>
</pre>
    </td>
  </tr>
  <tr id="L2">
    <th class="line-num">
      <a href="#L2">2</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#include</span> <span class="include">&lt;GeoIPCity.h&gt;</span>
</pre>
    </td>
  </tr>
  <tr id="L3">
    <th class="line-num">
      <a href="#L3">3</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L4">
    <th class="line-num">
      <a href="#L4">4</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#include</span> <span class="include">&lt;ctype.h&gt;</span>
</pre>
    </td>
  </tr>
  <tr id="L5">
    <th class="line-num">
      <a href="#L5">5</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#include</span> <span class="include">&lt;stdlib.h&gt;</span>
</pre>
    </td>
  </tr>
  <tr id="L6">
    <th class="line-num">
      <a href="#L6">6</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#include</span> <span class="include">&lt;string.h&gt;</span>
</pre>
    </td>
  </tr>
  <tr id="L7">
    <th class="line-num">
      <a href="#L7">7</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L8">
    <th class="line-num">
      <a href="#L8">8</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#include</span> <span class="include">&quot;base.h&quot;</span>
</pre>
    </td>
  </tr>
  <tr id="L9">
    <th class="line-num">
      <a href="#L9">9</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#include</span> <span class="include">&quot;log.h&quot;</span>
</pre>
    </td>
  </tr>
  <tr id="L10">
    <th class="line-num">
      <a href="#L10">10</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#include</span> <span class="include">&quot;buffer.h&quot;</span>
</pre>
    </td>
  </tr>
  <tr id="L11">
    <th class="line-num">
      <a href="#L11">11</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L12">
    <th class="line-num">
      <a href="#L12">12</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#include</span> <span class="include">&quot;plugin.h&quot;</span>
</pre>
    </td>
  </tr>
  <tr id="L13">
    <th class="line-num">
      <a href="#L13">13</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L14">
    <th class="line-num">
      <a href="#L14">14</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#ifdef</span> HAVE_CONFIG_H
</pre>
    </td>
  </tr>
  <tr id="L15">
    <th class="line-num">
      <a href="#L15">15</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#include</span> <span class="include">&quot;config.h&quot;</span>
</pre>
    </td>
  </tr>
  <tr id="L16">
    <th class="line-num">
      <a href="#L16">16</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#endif</span>
</pre>
    </td>
  </tr>
  <tr id="L17">
    <th class="line-num">
      <a href="#L17">17</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L18">
    <th class="line-num">
      <a href="#L18">18</a>
    </th>
    <td class="line-code">
      <pre><span class="comment">/**</span>
</pre>
    </td>
  </tr>
  <tr id="L19">
    <th class="line-num">
      <a href="#L19">19</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> * </span>
</pre>
    </td>
  </tr>
  <tr id="L20">
    <th class="line-num">
      <a href="#L20">20</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> * $mod_geoip.c (v2.0) (13.09.2006 00:29:11)</span>
</pre>
    </td>
  </tr>
  <tr id="L21">
    <th class="line-num">
      <a href="#L21">21</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *</span>
</pre>
    </td>
  </tr>
  <tr id="L22">
    <th class="line-num">
      <a href="#L22">22</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> * Name:</span>
</pre>
    </td>
  </tr>
  <tr id="L23">
    <th class="line-num">
      <a href="#L23">23</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *          mod_geoip.c</span>
</pre>
    </td>
  </tr>
  <tr id="L24">
    <th class="line-num">
      <a href="#L24">24</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *</span>
</pre>
    </td>
  </tr>
  <tr id="L25">
    <th class="line-num">
      <a href="#L25">25</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> * Description:</span>
</pre>
    </td>
  </tr>
  <tr id="L26">
    <th class="line-num">
      <a href="#L26">26</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *          GeoIP module (plugin) for lighttpd.</span>
</pre>
    </td>
  </tr>
  <tr id="L27">
    <th class="line-num">
      <a href="#L27">27</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *          the module loads a geoip database of type &quot;country&quot; or &quot;city&quot; and</span>
</pre>
    </td>
  </tr>
  <tr id="L28">
    <th class="line-num">
      <a href="#L28">28</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *          sets new ENV vars based on ip record lookups.</span>
</pre>
    </td>
  </tr>
  <tr id="L29">
    <th class="line-num">
      <a href="#L29">29</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *</span>
</pre>
    </td>
  </tr>
  <tr id="L30">
    <th class="line-num">
      <a href="#L30">30</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *          country db env's:</span>
</pre>
    </td>
  </tr>
  <tr id="L31">
    <th class="line-num">
      <a href="#L31">31</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *                          GEOIP_COUNTRY_CODE</span>
</pre>
    </td>
  </tr>
  <tr id="L32">
    <th class="line-num">
      <a href="#L32">32</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *                          GEOIP_COUNTRY_CODE3</span>
</pre>
    </td>
  </tr>
  <tr id="L33">
    <th class="line-num">
      <a href="#L33">33</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *                          GEOIP_COUNTRY_NAME</span>
</pre>
    </td>
  </tr>
  <tr id="L34">
    <th class="line-num">
      <a href="#L34">34</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *</span>
</pre>
    </td>
  </tr>
  <tr id="L35">
    <th class="line-num">
      <a href="#L35">35</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *          city db env's:</span>
</pre>
    </td>
  </tr>
  <tr id="L36">
    <th class="line-num">
      <a href="#L36">36</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *                          GEOIP_COUNTRY_CODE</span>
</pre>
    </td>
  </tr>
  <tr id="L37">
    <th class="line-num">
      <a href="#L37">37</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *                          GEOIP_COUNTRY_CODE3</span>
</pre>
    </td>
  </tr>
  <tr id="L38">
    <th class="line-num">
      <a href="#L38">38</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *                          GEOIP_COUNTRY_NAME</span>
</pre>
    </td>
  </tr>
  <tr id="L39">
    <th class="line-num">
      <a href="#L39">39</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *                          GEOIP_CITY_NAME</span>
</pre>
    </td>
  </tr>
  <tr id="L40">
    <th class="line-num">
      <a href="#L40">40</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *                          GEOIP_CITY_POSTAL_CODE</span>
</pre>
    </td>
  </tr>
  <tr id="L41">
    <th class="line-num">
      <a href="#L41">41</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *                          GEOIP_CITY_LATITUDE</span>
</pre>
    </td>
  </tr>
  <tr id="L42">
    <th class="line-num">
      <a href="#L42">42</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *                          GEOIP_CITY_LONG_LATITUDE</span>
</pre>
    </td>
  </tr>
  <tr id="L43">
    <th class="line-num">
      <a href="#L43">43</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *                          GEOIP_CITY_DMA_CODE</span>
</pre>
    </td>
  </tr>
  <tr id="L44">
    <th class="line-num">
      <a href="#L44">44</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *                          GEOIP_CITY_AREA_CODE</span>
</pre>
    </td>
  </tr>
  <tr id="L45">
    <th class="line-num">
      <a href="#L45">45</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> * </span>
</pre>
    </td>
  </tr>
  <tr id="L46">
    <th class="line-num">
      <a href="#L46">46</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> * Usage (configuration options):</span>
</pre>
    </td>
  </tr>
  <tr id="L47">
    <th class="line-num">
      <a href="#L47">47</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *          geoip.db-filename = &lt;path to the geoip or geocity database&gt;</span>
</pre>
    </td>
  </tr>
  <tr id="L48">
    <th class="line-num">
      <a href="#L48">48</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *          geoip.memory-cache = &lt;enable|disable&gt; : default disabled</span>
</pre>
    </td>
  </tr>
  <tr id="L49">
    <th class="line-num">
      <a href="#L49">49</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *                          if enabled, mod_geoip will load the database binary file to</span>
</pre>
    </td>
  </tr>
  <tr id="L50">
    <th class="line-num">
      <a href="#L50">50</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *                          memory for very fast lookups. the only penalty is memory usage.</span>
</pre>
    </td>
  </tr>
  <tr id="L51">
    <th class="line-num">
      <a href="#L51">51</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *</span>
</pre>
    </td>
  </tr>
  <tr id="L52">
    <th class="line-num">
      <a href="#L52">52</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> * Author:</span>
</pre>
    </td>
  </tr>
  <tr id="L53">
    <th class="line-num">
      <a href="#L53">53</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *          Ami E. Bizamcher (amix)</span>
</pre>
    </td>
  </tr>
  <tr id="L54">
    <th class="line-num">
      <a href="#L54">54</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *          duke.amix@gmail.com</span>
</pre>
    </td>
  </tr>
  <tr id="L55">
    <th class="line-num">
      <a href="#L55">55</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> * </span>
</pre>
    </td>
  </tr>
  <tr id="L56">
    <th class="line-num">
      <a href="#L56">56</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> * Note:</span>
</pre>
    </td>
  </tr>
  <tr id="L57">
    <th class="line-num">
      <a href="#L57">57</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> *          GeoIP Library and API must be installed!</span>
</pre>
    </td>
  </tr>
  <tr id="L58">
    <th class="line-num">
      <a href="#L58">58</a>
    </th>
    <td class="line-code">
      <pre><span class="comment"> */</span>
</pre>
    </td>
  </tr>
  <tr id="L59">
    <th class="line-num">
      <a href="#L59">59</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L60">
    <th class="line-num">
      <a href="#L60">60</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L61">
    <th class="line-num">
      <a href="#L61">61</a>
    </th>
    <td class="line-code">
      <pre><span class="comment">/* plugin config for all request/connections */</span>
</pre>
    </td>
  </tr>
  <tr id="L62">
    <th class="line-num">
      <a href="#L62">62</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L63">
    <th class="line-num">
      <a href="#L63">63</a>
    </th>
    <td class="line-code">
      <pre><span class="keyword">typedef</span> <span class="keyword">struct</span> {
</pre>
    </td>
  </tr>
  <tr id="L64">
    <th class="line-num">
      <a href="#L64">64</a>
    </th>
    <td class="line-code">
      <pre>                <span class="predefined-type">unsigned</span> <span class="predefined-type">short</span> mem_cache;
</pre>
    </td>
  </tr>
  <tr id="L65">
    <th class="line-num">
      <a href="#L65">65</a>
    </th>
    <td class="line-code">
      <pre>                buffer  *db_name;
</pre>
    </td>
  </tr>
  <tr id="L66">
    <th class="line-num">
      <a href="#L66">66</a>
    </th>
    <td class="line-code">
      <pre>                GeoIP   *gi;
</pre>
    </td>
  </tr>
  <tr id="L67">
    <th class="line-num">
      <a href="#L67">67</a>
    </th>
    <td class="line-code">
      <pre>} plugin_config;
</pre>
    </td>
  </tr>
  <tr id="L68">
    <th class="line-num">
      <a href="#L68">68</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L69">
    <th class="line-num">
      <a href="#L69">69</a>
    </th>
    <td class="line-code">
      <pre><span class="keyword">typedef</span> <span class="keyword">struct</span> {
</pre>
    </td>
  </tr>
  <tr id="L70">
    <th class="line-num">
      <a href="#L70">70</a>
    </th>
    <td class="line-code">
      <pre>                PLUGIN_DATA;
</pre>
    </td>
  </tr>
  <tr id="L71">
    <th class="line-num">
      <a href="#L71">71</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L72">
    <th class="line-num">
      <a href="#L72">72</a>
    </th>
    <td class="line-code">
      <pre>                plugin_config **config_storage;
</pre>
    </td>
  </tr>
  <tr id="L73">
    <th class="line-num">
      <a href="#L73">73</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L74">
    <th class="line-num">
      <a href="#L74">74</a>
    </th>
    <td class="line-code">
      <pre>                plugin_config conf; 
</pre>
    </td>
  </tr>
  <tr id="L75">
    <th class="line-num">
      <a href="#L75">75</a>
    </th>
    <td class="line-code">
      <pre>} plugin_data;
</pre>
    </td>
  </tr>
  <tr id="L76">
    <th class="line-num">
      <a href="#L76">76</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L77">
    <th class="line-num">
      <a href="#L77">77</a>
    </th>
    <td class="line-code">
      <pre><span class="comment">/* init the plugin data */</span>
</pre>
    </td>
  </tr>
  <tr id="L78">
    <th class="line-num">
      <a href="#L78">78</a>
    </th>
    <td class="line-code">
      <pre>INIT_FUNC(mod_geoip_init) {
</pre>
    </td>
  </tr>
  <tr id="L79">
    <th class="line-num">
      <a href="#L79">79</a>
    </th>
    <td class="line-code">
      <pre>                plugin_data *p;
</pre>
    </td>
  </tr>
  <tr id="L80">
    <th class="line-num">
      <a href="#L80">80</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L81">
    <th class="line-num">
      <a href="#L81">81</a>
    </th>
    <td class="line-code">
      <pre>                p = calloc(<span class="integer">1</span>, <span class="keyword">sizeof</span>(*p));
</pre>
    </td>
  </tr>
  <tr id="L82">
    <th class="line-num">
      <a href="#L82">82</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L83">
    <th class="line-num">
      <a href="#L83">83</a>
    </th>
    <td class="line-code">
      <pre>                <span class="keyword">return</span> p;
</pre>
    </td>
  </tr>
  <tr id="L84">
    <th class="line-num">
      <a href="#L84">84</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  <tr id="L85">
    <th class="line-num">
      <a href="#L85">85</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L86">
    <th class="line-num">
      <a href="#L86">86</a>
    </th>
    <td class="line-code">
      <pre><span class="comment">/* destroy the plugin data */</span>
</pre>
    </td>
  </tr>
  <tr id="L87">
    <th class="line-num">
      <a href="#L87">87</a>
    </th>
    <td class="line-code">
      <pre>FREE_FUNC(mod_geoip_free) {
</pre>
    </td>
  </tr>
  <tr id="L88">
    <th class="line-num">
      <a href="#L88">88</a>
    </th>
    <td class="line-code">
      <pre>                plugin_data *p = p_d;
</pre>
    </td>
  </tr>
  <tr id="L89">
    <th class="line-num">
      <a href="#L89">89</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L90">
    <th class="line-num">
      <a href="#L90">90</a>
    </th>
    <td class="line-code">
      <pre>                UNUSED(srv);
</pre>
    </td>
  </tr>
  <tr id="L91">
    <th class="line-num">
      <a href="#L91">91</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L92">
    <th class="line-num">
      <a href="#L92">92</a>
    </th>
    <td class="line-code">
      <pre>                <span class="keyword">if</span> (!p) <span class="keyword">return</span> HANDLER_GO_ON;
</pre>
    </td>
  </tr>
  <tr id="L93">
    <th class="line-num">
      <a href="#L93">93</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L94">
    <th class="line-num">
      <a href="#L94">94</a>
    </th>
    <td class="line-code">
      <pre>                <span class="keyword">if</span> (p-&gt;config_storage) {
</pre>
    </td>
  </tr>
  <tr id="L95">
    <th class="line-num">
      <a href="#L95">95</a>
    </th>
    <td class="line-code">
      <pre>                                size_t i;
</pre>
    </td>
  </tr>
  <tr id="L96">
    <th class="line-num">
      <a href="#L96">96</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L97">
    <th class="line-num">
      <a href="#L97">97</a>
    </th>
    <td class="line-code">
      <pre>                                <span class="keyword">for</span> (i = <span class="integer">0</span>; i &lt; srv-&gt;config_context-&gt;used; i++) {
</pre>
    </td>
  </tr>
  <tr id="L98">
    <th class="line-num">
      <a href="#L98">98</a>
    </th>
    <td class="line-code">
      <pre>                                                plugin_config *s = p-&gt;config_storage[i];
</pre>
    </td>
  </tr>
  <tr id="L99">
    <th class="line-num">
      <a href="#L99">99</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L100">
    <th class="line-num">
      <a href="#L100">100</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">if</span> (!s) <span class="keyword">continue</span>;
</pre>
    </td>
  </tr>
  <tr id="L101">
    <th class="line-num">
      <a href="#L101">101</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L102">
    <th class="line-num">
      <a href="#L102">102</a>
    </th>
    <td class="line-code">
      <pre>                                                buffer_free(s-&gt;db_name);
</pre>
    </td>
  </tr>
  <tr id="L103">
    <th class="line-num">
      <a href="#L103">103</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L104">
    <th class="line-num">
      <a href="#L104">104</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="comment">/* clean up */</span>
</pre>
    </td>
  </tr>
  <tr id="L105">
    <th class="line-num">
      <a href="#L105">105</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">if</span> (s-&gt;gi) GeoIP_delete(s-&gt;gi);
</pre>
    </td>
  </tr>
  <tr id="L106">
    <th class="line-num">
      <a href="#L106">106</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L107">
    <th class="line-num">
      <a href="#L107">107</a>
    </th>
    <td class="line-code">
      <pre>                                                free(s);
</pre>
    </td>
  </tr>
  <tr id="L108">
    <th class="line-num">
      <a href="#L108">108</a>
    </th>
    <td class="line-code">
      <pre>                                }
</pre>
    </td>
  </tr>
  <tr id="L109">
    <th class="line-num">
      <a href="#L109">109</a>
    </th>
    <td class="line-code">
      <pre>                                free(p-&gt;config_storage);
</pre>
    </td>
  </tr>
  <tr id="L110">
    <th class="line-num">
      <a href="#L110">110</a>
    </th>
    <td class="line-code">
      <pre>                }
</pre>
    </td>
  </tr>
  <tr id="L111">
    <th class="line-num">
      <a href="#L111">111</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L112">
    <th class="line-num">
      <a href="#L112">112</a>
    </th>
    <td class="line-code">
      <pre>                free(p);
</pre>
    </td>
  </tr>
  <tr id="L113">
    <th class="line-num">
      <a href="#L113">113</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L114">
    <th class="line-num">
      <a href="#L114">114</a>
    </th>
    <td class="line-code">
      <pre>                <span class="keyword">return</span> HANDLER_GO_ON;
</pre>
    </td>
  </tr>
  <tr id="L115">
    <th class="line-num">
      <a href="#L115">115</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  <tr id="L116">
    <th class="line-num">
      <a href="#L116">116</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L117">
    <th class="line-num">
      <a href="#L117">117</a>
    </th>
    <td class="line-code">
      <pre><span class="comment">/* handle plugin config and check values */</span>
</pre>
    </td>
  </tr>
  <tr id="L118">
    <th class="line-num">
      <a href="#L118">118</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L119">
    <th class="line-num">
      <a href="#L119">119</a>
    </th>
    <td class="line-code">
      <pre>SETDEFAULTS_FUNC(mod_geoip_set_defaults) {
</pre>
    </td>
  </tr>
  <tr id="L120">
    <th class="line-num">
      <a href="#L120">120</a>
    </th>
    <td class="line-code">
      <pre>                plugin_data *p = p_d;
</pre>
    </td>
  </tr>
  <tr id="L121">
    <th class="line-num">
      <a href="#L121">121</a>
    </th>
    <td class="line-code">
      <pre>                size_t i = <span class="integer">0</span>;
</pre>
    </td>
  </tr>
  <tr id="L122">
    <th class="line-num">
      <a href="#L122">122</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L123">
    <th class="line-num">
      <a href="#L123">123</a>
    </th>
    <td class="line-code">
      <pre>                config_values_t cv[] = { 
</pre>
    </td>
  </tr>
  <tr id="L124">
    <th class="line-num">
      <a href="#L124">124</a>
    </th>
    <td class="line-code">
      <pre>                                { <span class="string"><span class="delimiter">&quot;</span><span class="content">geoip.db-filename</span><span class="delimiter">&quot;</span></span>,  <span class="predefined-constant">NULL</span>, T_CONFIG_STRING, T_CONFIG_SCOPE_CONNECTION }, <span class="comment">/* 0 */</span>
</pre>
    </td>
  </tr>
  <tr id="L125">
    <th class="line-num">
      <a href="#L125">125</a>
    </th>
    <td class="line-code">
      <pre>                                { <span class="string"><span class="delimiter">&quot;</span><span class="content">geoip.memory-cache</span><span class="delimiter">&quot;</span></span>, <span class="predefined-constant">NULL</span>, T_CONFIG_BOOLEAN, T_CONFIG_SCOPE_CONNECTION },        <span class="comment">/* 1 */</span>
</pre>
    </td>
  </tr>
  <tr id="L126">
    <th class="line-num">
      <a href="#L126">126</a>
    </th>
    <td class="line-code">
      <pre>                                { <span class="predefined-constant">NULL</span>,                                 <span class="predefined-constant">NULL</span>, T_CONFIG_UNSET, T_CONFIG_SCOPE_UNSET }
</pre>
    </td>
  </tr>
  <tr id="L127">
    <th class="line-num">
      <a href="#L127">127</a>
    </th>
    <td class="line-code">
      <pre>                };
</pre>
    </td>
  </tr>
  <tr id="L128">
    <th class="line-num">
      <a href="#L128">128</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L129">
    <th class="line-num">
      <a href="#L129">129</a>
    </th>
    <td class="line-code">
      <pre>                <span class="keyword">if</span> (!p) <span class="keyword">return</span> HANDLER_ERROR;
</pre>
    </td>
  </tr>
  <tr id="L130">
    <th class="line-num">
      <a href="#L130">130</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L131">
    <th class="line-num">
      <a href="#L131">131</a>
    </th>
    <td class="line-code">
      <pre>                p-&gt;config_storage = calloc(<span class="integer">1</span>, srv-&gt;config_context-&gt;used * <span class="keyword">sizeof</span>(specific_config *));
</pre>
    </td>
  </tr>
  <tr id="L132">
    <th class="line-num">
      <a href="#L132">132</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L133">
    <th class="line-num">
      <a href="#L133">133</a>
    </th>
    <td class="line-code">
      <pre>                <span class="keyword">for</span> (i = <span class="integer">0</span>; i &lt; srv-&gt;config_context-&gt;used; i++) {
</pre>
    </td>
  </tr>
  <tr id="L134">
    <th class="line-num">
      <a href="#L134">134</a>
    </th>
    <td class="line-code">
      <pre>                                plugin_config *s;
</pre>
    </td>
  </tr>
  <tr id="L135">
    <th class="line-num">
      <a href="#L135">135</a>
    </th>
    <td class="line-code">
      <pre>                                <span class="predefined-type">int</span> mode;
</pre>
    </td>
  </tr>
  <tr id="L136">
    <th class="line-num">
      <a href="#L136">136</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L137">
    <th class="line-num">
      <a href="#L137">137</a>
    </th>
    <td class="line-code">
      <pre>                                s = calloc(<span class="integer">1</span>, <span class="keyword">sizeof</span>(plugin_config));
</pre>
    </td>
  </tr>
  <tr id="L138">
    <th class="line-num">
      <a href="#L138">138</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L139">
    <th class="line-num">
      <a href="#L139">139</a>
    </th>
    <td class="line-code">
      <pre>                                s-&gt;db_name = buffer_init();
</pre>
    </td>
  </tr>
  <tr id="L140">
    <th class="line-num">
      <a href="#L140">140</a>
    </th>
    <td class="line-code">
      <pre>                                s-&gt;mem_cache = <span class="integer">0</span>; <span class="comment">/* default: do not load db to cache */</span>
</pre>
    </td>
  </tr>
  <tr id="L141">
    <th class="line-num">
      <a href="#L141">141</a>
    </th>
    <td class="line-code">
      <pre>                                s-&gt;gi = <span class="predefined-constant">NULL</span>;
</pre>
    </td>
  </tr>
  <tr id="L142">
    <th class="line-num">
      <a href="#L142">142</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L143">
    <th class="line-num">
      <a href="#L143">143</a>
    </th>
    <td class="line-code">
      <pre>                                cv[<span class="integer">0</span>].destination = s-&gt;db_name;
</pre>
    </td>
  </tr>
  <tr id="L144">
    <th class="line-num">
      <a href="#L144">144</a>
    </th>
    <td class="line-code">
      <pre>                                cv[<span class="integer">1</span>].destination = &amp;(s-&gt;mem_cache);
</pre>
    </td>
  </tr>
  <tr id="L145">
    <th class="line-num">
      <a href="#L145">145</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L146">
    <th class="line-num">
      <a href="#L146">146</a>
    </th>
    <td class="line-code">
      <pre>                                p-&gt;config_storage[i] = s;
</pre>
    </td>
  </tr>
  <tr id="L147">
    <th class="line-num">
      <a href="#L147">147</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L148">
    <th class="line-num">
      <a href="#L148">148</a>
    </th>
    <td class="line-code">
      <pre>                                <span class="keyword">if</span> (<span class="integer">0</span> != config_insert_values_global(srv, ((data_config *)srv-&gt;config_context-&gt;data[i])-&gt;value, cv)) {
</pre>
    </td>
  </tr>
  <tr id="L149">
    <th class="line-num">
      <a href="#L149">149</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">return</span> HANDLER_ERROR;
</pre>
    </td>
  </tr>
  <tr id="L150">
    <th class="line-num">
      <a href="#L150">150</a>
    </th>
    <td class="line-code">
      <pre>                                }
</pre>
    </td>
  </tr>
  <tr id="L151">
    <th class="line-num">
      <a href="#L151">151</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L152">
    <th class="line-num">
      <a href="#L152">152</a>
    </th>
    <td class="line-code">
      <pre>                                mode = GEOIP_STANDARD | GEOIP_CHECK_CACHE;
</pre>
    </td>
  </tr>
  <tr id="L153">
    <th class="line-num">
      <a href="#L153">153</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L154">
    <th class="line-num">
      <a href="#L154">154</a>
    </th>
    <td class="line-code">
      <pre>                                <span class="comment">/* country db filename is requeried! */</span>
</pre>
    </td>
  </tr>
  <tr id="L155">
    <th class="line-num">
      <a href="#L155">155</a>
    </th>
    <td class="line-code">
      <pre>                                <span class="keyword">if</span> (!buffer_is_empty(s-&gt;db_name)) {
</pre>
    </td>
  </tr>
  <tr id="L156">
    <th class="line-num">
      <a href="#L156">156</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L157">
    <th class="line-num">
      <a href="#L157">157</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="comment">/* let's start cooking */</span>
</pre>
    </td>
  </tr>
  <tr id="L158">
    <th class="line-num">
      <a href="#L158">158</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">if</span> (s-&gt;mem_cache != <span class="integer">0</span>)
</pre>
    </td>
  </tr>
  <tr id="L159">
    <th class="line-num">
      <a href="#L159">159</a>
    </th>
    <td class="line-code">
      <pre>                                                                mode = GEOIP_MEMORY_CACHE | GEOIP_CHECK_CACHE;
</pre>
    </td>
  </tr>
  <tr id="L160">
    <th class="line-num">
      <a href="#L160">160</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L161">
    <th class="line-num">
      <a href="#L161">161</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (s-&gt;gi = GeoIP_open(s-&gt;db_name-&gt;ptr, mode))) {
</pre>
    </td>
  </tr>
  <tr id="L162">
    <th class="line-num">
      <a href="#L162">162</a>
    </th>
    <td class="line-code">
      <pre>                                                                log_error_write(srv, __FILE__, __LINE__, <span class="string"><span class="delimiter">&quot;</span><span class="content">s</span><span class="delimiter">&quot;</span></span>,
</pre>
    </td>
  </tr>
  <tr id="L163">
    <th class="line-num">
      <a href="#L163">163</a>
    </th>
    <td class="line-code">
      <pre>                                                                                <span class="string"><span class="delimiter">&quot;</span><span class="content">failed to open GeoIP database!!!</span><span class="delimiter">&quot;</span></span>);
</pre>
    </td>
  </tr>
  <tr id="L164">
    <th class="line-num">
      <a href="#L164">164</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L165">
    <th class="line-num">
      <a href="#L165">165</a>
    </th>
    <td class="line-code">
      <pre>                                                                <span class="keyword">return</span> HANDLER_ERROR;
</pre>
    </td>
  </tr>
  <tr id="L166">
    <th class="line-num">
      <a href="#L166">166</a>
    </th>
    <td class="line-code">
      <pre>                                                }
</pre>
    </td>
  </tr>
  <tr id="L167">
    <th class="line-num">
      <a href="#L167">167</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L168">
    <th class="line-num">
      <a href="#L168">168</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="comment">/* is the db supported ? */</span>
</pre>
    </td>
  </tr>
  <tr id="L169">
    <th class="line-num">
      <a href="#L169">169</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">if</span> (s-&gt;gi-&gt;databaseType != GEOIP_COUNTRY_EDITION &amp;&amp;
</pre>
    </td>
  </tr>
  <tr id="L170">
    <th class="line-num">
      <a href="#L170">170</a>
    </th>
    <td class="line-code">
      <pre>                                                                s-&gt;gi-&gt;databaseType != GEOIP_CITY_EDITION_REV0 &amp;&amp;
</pre>
    </td>
  </tr>
  <tr id="L171">
    <th class="line-num">
      <a href="#L171">171</a>
    </th>
    <td class="line-code">
      <pre>                                                                s-&gt;gi-&gt;databaseType != GEOIP_CITY_EDITION_REV1) {
</pre>
    </td>
  </tr>
  <tr id="L172">
    <th class="line-num">
      <a href="#L172">172</a>
    </th>
    <td class="line-code">
      <pre>                                                                log_error_write(srv, __FILE__, __LINE__, <span class="string"><span class="delimiter">&quot;</span><span class="content">s</span><span class="delimiter">&quot;</span></span>,
</pre>
    </td>
  </tr>
  <tr id="L173">
    <th class="line-num">
      <a href="#L173">173</a>
    </th>
    <td class="line-code">
      <pre>                                                                                <span class="string"><span class="delimiter">&quot;</span><span class="content">GeoIP database is of unsupported type!!!</span><span class="delimiter">&quot;</span></span>);
</pre>
    </td>
  </tr>
  <tr id="L174">
    <th class="line-num">
      <a href="#L174">174</a>
    </th>
    <td class="line-code">
      <pre>                                                }
</pre>
    </td>
  </tr>
  <tr id="L175">
    <th class="line-num">
      <a href="#L175">175</a>
    </th>
    <td class="line-code">
      <pre>                                }
</pre>
    </td>
  </tr>
  <tr id="L176">
    <th class="line-num">
      <a href="#L176">176</a>
    </th>
    <td class="line-code">
      <pre>                }
</pre>
    </td>
  </tr>
  <tr id="L177">
    <th class="line-num">
      <a href="#L177">177</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L178">
    <th class="line-num">
      <a href="#L178">178</a>
    </th>
    <td class="line-code">
      <pre>                <span class="keyword">return</span> HANDLER_GO_ON;
</pre>
    </td>
  </tr>
  <tr id="L179">
    <th class="line-num">
      <a href="#L179">179</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  <tr id="L180">
    <th class="line-num">
      <a href="#L180">180</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L181">
    <th class="line-num">
      <a href="#L181">181</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#define</span> PATCH(x) \
</pre>
    </td>
  </tr>
  <tr id="L182">
    <th class="line-num">
      <a href="#L182">182</a>
    </th>
    <td class="line-code">
      <pre>                p-&gt;conf.x = s-&gt;x;
</pre>
    </td>
  </tr>
  <tr id="L183">
    <th class="line-num">
      <a href="#L183">183</a>
    </th>
    <td class="line-code">
      <pre><span class="directive">static</span> <span class="predefined-type">int</span> mod_geoip_patch_connection(server *srv, connection *con, plugin_data *p) {
</pre>
    </td>
  </tr>
  <tr id="L184">
    <th class="line-num">
      <a href="#L184">184</a>
    </th>
    <td class="line-code">
      <pre>                size_t i, j;
</pre>
    </td>
  </tr>
  <tr id="L185">
    <th class="line-num">
      <a href="#L185">185</a>
    </th>
    <td class="line-code">
      <pre>                plugin_config *s = p-&gt;config_storage[<span class="integer">0</span>];
</pre>
    </td>
  </tr>
  <tr id="L186">
    <th class="line-num">
      <a href="#L186">186</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L187">
    <th class="line-num">
      <a href="#L187">187</a>
    </th>
    <td class="line-code">
      <pre>                PATCH(db_name);
</pre>
    </td>
  </tr>
  <tr id="L188">
    <th class="line-num">
      <a href="#L188">188</a>
    </th>
    <td class="line-code">
      <pre>                PATCH(mem_cache);
</pre>
    </td>
  </tr>
  <tr id="L189">
    <th class="line-num">
      <a href="#L189">189</a>
    </th>
    <td class="line-code">
      <pre>                PATCH(gi);
</pre>
    </td>
  </tr>
  <tr id="L190">
    <th class="line-num">
      <a href="#L190">190</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L191">
    <th class="line-num">
      <a href="#L191">191</a>
    </th>
    <td class="line-code">
      <pre>                <span class="comment">/* skip the first, the global context */</span>
</pre>
    </td>
  </tr>
  <tr id="L192">
    <th class="line-num">
      <a href="#L192">192</a>
    </th>
    <td class="line-code">
      <pre>                <span class="keyword">for</span> (i = <span class="integer">1</span>; i &lt; srv-&gt;config_context-&gt;used; i++) {
</pre>
    </td>
  </tr>
  <tr id="L193">
    <th class="line-num">
      <a href="#L193">193</a>
    </th>
    <td class="line-code">
      <pre>                                data_config *dc = (data_config *)srv-&gt;config_context-&gt;data[i];
</pre>
    </td>
  </tr>
  <tr id="L194">
    <th class="line-num">
      <a href="#L194">194</a>
    </th>
    <td class="line-code">
      <pre>                                s = p-&gt;config_storage[i];
</pre>
    </td>
  </tr>
  <tr id="L195">
    <th class="line-num">
      <a href="#L195">195</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L196">
    <th class="line-num">
      <a href="#L196">196</a>
    </th>
    <td class="line-code">
      <pre>                                <span class="comment">/* condition didn't match */</span>
</pre>
    </td>
  </tr>
  <tr id="L197">
    <th class="line-num">
      <a href="#L197">197</a>
    </th>
    <td class="line-code">
      <pre>                                <span class="keyword">if</span> (!config_check_cond(srv, con, dc)) <span class="keyword">continue</span>;
</pre>
    </td>
  </tr>
  <tr id="L198">
    <th class="line-num">
      <a href="#L198">198</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L199">
    <th class="line-num">
      <a href="#L199">199</a>
    </th>
    <td class="line-code">
      <pre>                                <span class="comment">/* merge config */</span>
</pre>
    </td>
  </tr>
  <tr id="L200">
    <th class="line-num">
      <a href="#L200">200</a>
    </th>
    <td class="line-code">
      <pre>                                <span class="keyword">for</span> (j = <span class="integer">0</span>; j &lt; dc-&gt;value-&gt;used; j++) {
</pre>
    </td>
  </tr>
  <tr id="L201">
    <th class="line-num">
      <a href="#L201">201</a>
    </th>
    <td class="line-code">
      <pre>                                                data_unset *du = dc-&gt;value-&gt;data[j];
</pre>
    </td>
  </tr>
  <tr id="L202">
    <th class="line-num">
      <a href="#L202">202</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L203">
    <th class="line-num">
      <a href="#L203">203</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">if</span> (buffer_is_equal_string(du-&gt;key, CONST_STR_LEN(<span class="string"><span class="delimiter">&quot;</span><span class="content">geoip.db-filename</span><span class="delimiter">&quot;</span></span>))) {
</pre>
    </td>
  </tr>
  <tr id="L204">
    <th class="line-num">
      <a href="#L204">204</a>
    </th>
    <td class="line-code">
      <pre>                                                                PATCH(db_name);
</pre>
    </td>
  </tr>
  <tr id="L205">
    <th class="line-num">
      <a href="#L205">205</a>
    </th>
    <td class="line-code">
      <pre>                                                }
</pre>
    </td>
  </tr>
  <tr id="L206">
    <th class="line-num">
      <a href="#L206">206</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L207">
    <th class="line-num">
      <a href="#L207">207</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">if</span> (buffer_is_equal_string(du-&gt;key, CONST_STR_LEN(<span class="string"><span class="delimiter">&quot;</span><span class="content">geoip.memory-cache</span><span class="delimiter">&quot;</span></span>))) {
</pre>
    </td>
  </tr>
  <tr id="L208">
    <th class="line-num">
      <a href="#L208">208</a>
    </th>
    <td class="line-code">
      <pre>                                                                PATCH(mem_cache);
</pre>
    </td>
  </tr>
  <tr id="L209">
    <th class="line-num">
      <a href="#L209">209</a>
    </th>
    <td class="line-code">
      <pre>                                                }
</pre>
    </td>
  </tr>
  <tr id="L210">
    <th class="line-num">
      <a href="#L210">210</a>
    </th>
    <td class="line-code">
      <pre>                                }
</pre>
    </td>
  </tr>
  <tr id="L211">
    <th class="line-num">
      <a href="#L211">211</a>
    </th>
    <td class="line-code">
      <pre>                }
</pre>
    </td>
  </tr>
  <tr id="L212">
    <th class="line-num">
      <a href="#L212">212</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L213">
    <th class="line-num">
      <a href="#L213">213</a>
    </th>
    <td class="line-code">
      <pre>                <span class="keyword">return</span> <span class="integer">0</span>;
</pre>
    </td>
  </tr>
  <tr id="L214">
    <th class="line-num">
      <a href="#L214">214</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  <tr id="L215">
    <th class="line-num">
      <a href="#L215">215</a>
    </th>
    <td class="line-code">
      <pre><span class="preprocessor">#undef</span> PATCH
</pre>
    </td>
  </tr>
  <tr id="L216">
    <th class="line-num">
      <a href="#L216">216</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L217">
    <th class="line-num">
      <a href="#L217">217</a>
    </th>
    <td class="line-code">
      <pre>URIHANDLER_FUNC(mod_geoip_subrequest) {
</pre>
    </td>
  </tr>
  <tr id="L218">
    <th class="line-num">
      <a href="#L218">218</a>
    </th>
    <td class="line-code">
      <pre>                plugin_data *p = p_d;
</pre>
    </td>
  </tr>
  <tr id="L219">
    <th class="line-num">
      <a href="#L219">219</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L220">
    <th class="line-num">
      <a href="#L220">220</a>
    </th>
    <td class="line-code">
      <pre>                mod_geoip_patch_connection(srv, con, p);
</pre>
    </td>
  </tr>
  <tr id="L221">
    <th class="line-num">
      <a href="#L221">221</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L222">
    <th class="line-num">
      <a href="#L222">222</a>
    </th>
    <td class="line-code">
      <pre>                <span class="keyword">if</span> (!buffer_is_empty(p-&gt;conf.db_name)) {
</pre>
    </td>
  </tr>
  <tr id="L223">
    <th class="line-num">
      <a href="#L223">223</a>
    </th>
    <td class="line-code">
      <pre>                                <span class="directive">const</span> <span class="predefined-type">char</span> *remote_ip;
</pre>
    </td>
  </tr>
  <tr id="L224">
    <th class="line-num">
      <a href="#L224">224</a>
    </th>
    <td class="line-code">
      <pre>                                GeoIP *gi;
</pre>
    </td>
  </tr>
  <tr id="L225">
    <th class="line-num">
      <a href="#L225">225</a>
    </th>
    <td class="line-code">
      <pre>                                data_string *ds;
</pre>
    </td>
  </tr>
  <tr id="L226">
    <th class="line-num">
      <a href="#L226">226</a>
    </th>
    <td class="line-code">
      <pre>                                <span class="directive">const</span> <span class="predefined-type">char</span> *returnedCountry;
</pre>
    </td>
  </tr>
  <tr id="L227">
    <th class="line-num">
      <a href="#L227">227</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L228">
    <th class="line-num">
      <a href="#L228">228</a>
    </th>
    <td class="line-code">
      <pre>                                remote_ip = inet_ntop_cache_get_ip(srv, &amp;(con-&gt;dst_addr));
</pre>
    </td>
  </tr>
  <tr id="L229">
    <th class="line-num">
      <a href="#L229">229</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L230">
    <th class="line-num">
      <a href="#L230">230</a>
    </th>
    <td class="line-code">
      <pre>                                <span class="keyword">if</span> (p-&gt;conf.gi-&gt;databaseType == GEOIP_COUNTRY_EDITION) {
</pre>
    </td>
  </tr>
  <tr id="L231">
    <th class="line-num">
      <a href="#L231">231</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="comment">/* get the country code 2 chars */</span>
</pre>
    </td>
  </tr>
  <tr id="L232">
    <th class="line-num">
      <a href="#L232">232</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_element(con-&gt;environment, CONST_STR_LEN(<span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_COUNTRY_CODE</span><span class="delimiter">&quot;</span></span>)))) {
</pre>
    </td>
  </tr>
  <tr id="L233">
    <th class="line-num">
      <a href="#L233">233</a>
    </th>
    <td class="line-code">
      <pre>                                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> != (returnedCountry = GeoIP_country_code_by_addr(p-&gt;conf.gi, remote_ip))) {
</pre>
    </td>
  </tr>
  <tr id="L234">
    <th class="line-num">
      <a href="#L234">234</a>
    </th>
    <td class="line-code">
      <pre>                                                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_unused_element(con-&gt;environment, TYPE_STRING))) {
</pre>
    </td>
  </tr>
  <tr id="L235">
    <th class="line-num">
      <a href="#L235">235</a>
    </th>
    <td class="line-code">
      <pre>                                                                                                ds = data_string_init();
</pre>
    </td>
  </tr>
  <tr id="L236">
    <th class="line-num">
      <a href="#L236">236</a>
    </th>
    <td class="line-code">
      <pre>                                                                                }
</pre>
    </td>
  </tr>
  <tr id="L237">
    <th class="line-num">
      <a href="#L237">237</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L238">
    <th class="line-num">
      <a href="#L238">238</a>
    </th>
    <td class="line-code">
      <pre>                                                                                buffer_copy_string(ds-&gt;key, <span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_COUNTRY_CODE</span><span class="delimiter">&quot;</span></span>);
</pre>
    </td>
  </tr>
  <tr id="L239">
    <th class="line-num">
      <a href="#L239">239</a>
    </th>
    <td class="line-code">
      <pre>                                                                                buffer_copy_string(ds-&gt;value, returnedCountry);
</pre>
    </td>
  </tr>
  <tr id="L240">
    <th class="line-num">
      <a href="#L240">240</a>
    </th>
    <td class="line-code">
      <pre>                                                                                array_insert_unique(con-&gt;environment, (data_unset *)ds);
</pre>
    </td>
  </tr>
  <tr id="L241">
    <th class="line-num">
      <a href="#L241">241</a>
    </th>
    <td class="line-code">
      <pre>                                                                }
</pre>
    </td>
  </tr>
  <tr id="L242">
    <th class="line-num">
      <a href="#L242">242</a>
    </th>
    <td class="line-code">
      <pre>                                                }
</pre>
    </td>
  </tr>
  <tr id="L243">
    <th class="line-num">
      <a href="#L243">243</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L244">
    <th class="line-num">
      <a href="#L244">244</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="comment">/* get the country code 3 chars */</span>
</pre>
    </td>
  </tr>
  <tr id="L245">
    <th class="line-num">
      <a href="#L245">245</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_element(con-&gt;environment, CONST_STR_LEN(<span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_COUNTRY_CODE3</span><span class="delimiter">&quot;</span></span>)))) {
</pre>
    </td>
  </tr>
  <tr id="L246">
    <th class="line-num">
      <a href="#L246">246</a>
    </th>
    <td class="line-code">
      <pre>                                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> != (returnedCountry = GeoIP_country_code3_by_addr(p-&gt;conf.gi, remote_ip))) {
</pre>
    </td>
  </tr>
  <tr id="L247">
    <th class="line-num">
      <a href="#L247">247</a>
    </th>
    <td class="line-code">
      <pre>                                                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_unused_element(con-&gt;environment, TYPE_STRING))) {
</pre>
    </td>
  </tr>
  <tr id="L248">
    <th class="line-num">
      <a href="#L248">248</a>
    </th>
    <td class="line-code">
      <pre>                                                                                                ds = data_string_init();
</pre>
    </td>
  </tr>
  <tr id="L249">
    <th class="line-num">
      <a href="#L249">249</a>
    </th>
    <td class="line-code">
      <pre>                                                                                }
</pre>
    </td>
  </tr>
  <tr id="L250">
    <th class="line-num">
      <a href="#L250">250</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L251">
    <th class="line-num">
      <a href="#L251">251</a>
    </th>
    <td class="line-code">
      <pre>                                                                                buffer_copy_string(ds-&gt;key, <span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_COUNTRY_CODE3</span><span class="delimiter">&quot;</span></span>);
</pre>
    </td>
  </tr>
  <tr id="L252">
    <th class="line-num">
      <a href="#L252">252</a>
    </th>
    <td class="line-code">
      <pre>                                                                                buffer_copy_string(ds-&gt;value, returnedCountry);
</pre>
    </td>
  </tr>
  <tr id="L253">
    <th class="line-num">
      <a href="#L253">253</a>
    </th>
    <td class="line-code">
      <pre>                                                                                array_insert_unique(con-&gt;environment, (data_unset *)ds);
</pre>
    </td>
  </tr>
  <tr id="L254">
    <th class="line-num">
      <a href="#L254">254</a>
    </th>
    <td class="line-code">
      <pre>                                                                }
</pre>
    </td>
  </tr>
  <tr id="L255">
    <th class="line-num">
      <a href="#L255">255</a>
    </th>
    <td class="line-code">
      <pre>                                                }
</pre>
    </td>
  </tr>
  <tr id="L256">
    <th class="line-num">
      <a href="#L256">256</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L257">
    <th class="line-num">
      <a href="#L257">257</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="comment">/* get the country name */</span>
</pre>
    </td>
  </tr>
  <tr id="L258">
    <th class="line-num">
      <a href="#L258">258</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_element(con-&gt;environment, CONST_STR_LEN(<span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_COUNTRY_NAME</span><span class="delimiter">&quot;</span></span>)))) {
</pre>
    </td>
  </tr>
  <tr id="L259">
    <th class="line-num">
      <a href="#L259">259</a>
    </th>
    <td class="line-code">
      <pre>                                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> != (returnedCountry = GeoIP_country_name_by_addr(p-&gt;conf.gi, remote_ip))) {
</pre>
    </td>
  </tr>
  <tr id="L260">
    <th class="line-num">
      <a href="#L260">260</a>
    </th>
    <td class="line-code">
      <pre>                                                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_unused_element(con-&gt;environment, TYPE_STRING))) {
</pre>
    </td>
  </tr>
  <tr id="L261">
    <th class="line-num">
      <a href="#L261">261</a>
    </th>
    <td class="line-code">
      <pre>                                                                                                ds = data_string_init();
</pre>
    </td>
  </tr>
  <tr id="L262">
    <th class="line-num">
      <a href="#L262">262</a>
    </th>
    <td class="line-code">
      <pre>                                                                                }
</pre>
    </td>
  </tr>
  <tr id="L263">
    <th class="line-num">
      <a href="#L263">263</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L264">
    <th class="line-num">
      <a href="#L264">264</a>
    </th>
    <td class="line-code">
      <pre>                                                                                buffer_copy_string(ds-&gt;key, <span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_COUNTRY_NAME</span><span class="delimiter">&quot;</span></span>);
</pre>
    </td>
  </tr>
  <tr id="L265">
    <th class="line-num">
      <a href="#L265">265</a>
    </th>
    <td class="line-code">
      <pre>                                                                                buffer_copy_string(ds-&gt;value, returnedCountry);
</pre>
    </td>
  </tr>
  <tr id="L266">
    <th class="line-num">
      <a href="#L266">266</a>
    </th>
    <td class="line-code">
      <pre>                                                                                array_insert_unique(con-&gt;environment, (data_unset *)ds);
</pre>
    </td>
  </tr>
  <tr id="L267">
    <th class="line-num">
      <a href="#L267">267</a>
    </th>
    <td class="line-code">
      <pre>                                                                }
</pre>
    </td>
  </tr>
  <tr id="L268">
    <th class="line-num">
      <a href="#L268">268</a>
    </th>
    <td class="line-code">
      <pre>                                                }
</pre>
    </td>
  </tr>
  <tr id="L269">
    <th class="line-num">
      <a href="#L269">269</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L270">
    <th class="line-num">
      <a href="#L270">270</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="comment">/* go on... */</span>
</pre>
    </td>
  </tr>
  <tr id="L271">
    <th class="line-num">
      <a href="#L271">271</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">return</span> HANDLER_GO_ON;
</pre>
    </td>
  </tr>
  <tr id="L272">
    <th class="line-num">
      <a href="#L272">272</a>
    </th>
    <td class="line-code">
      <pre>                                }
</pre>
    </td>
  </tr>
  <tr id="L273">
    <th class="line-num">
      <a href="#L273">273</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L274">
    <th class="line-num">
      <a href="#L274">274</a>
    </th>
    <td class="line-code">
      <pre>                                <span class="comment">/* if we are here, geo city is in use */</span>
</pre>
    </td>
  </tr>
  <tr id="L275">
    <th class="line-num">
      <a href="#L275">275</a>
    </th>
    <td class="line-code">
      <pre>                                GeoIPRecord * gir;
</pre>
    </td>
  </tr>
  <tr id="L276">
    <th class="line-num">
      <a href="#L276">276</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L277">
    <th class="line-num">
      <a href="#L277">277</a>
    </th>
    <td class="line-code">
      <pre>                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> != (gir = GeoIP_record_by_addr(p-&gt;conf.gi, remote_ip))) {
</pre>
    </td>
  </tr>
  <tr id="L278">
    <th class="line-num">
      <a href="#L278">278</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="comment">/* get the country code 2 chars */</span>
</pre>
    </td>
  </tr>
  <tr id="L279">
    <th class="line-num">
      <a href="#L279">279</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_element(con-&gt;environment, CONST_STR_LEN(<span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_COUNTRY_CODE</span><span class="delimiter">&quot;</span></span>)))) {
</pre>
    </td>
  </tr>
  <tr id="L280">
    <th class="line-num">
      <a href="#L280">280</a>
    </th>
    <td class="line-code">
      <pre>                                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_unused_element(con-&gt;environment, TYPE_STRING))) {
</pre>
    </td>
  </tr>
  <tr id="L281">
    <th class="line-num">
      <a href="#L281">281</a>
    </th>
    <td class="line-code">
      <pre>                                                                                ds = data_string_init();
</pre>
    </td>
  </tr>
  <tr id="L282">
    <th class="line-num">
      <a href="#L282">282</a>
    </th>
    <td class="line-code">
      <pre>                                                                }
</pre>
    </td>
  </tr>
  <tr id="L283">
    <th class="line-num">
      <a href="#L283">283</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L284">
    <th class="line-num">
      <a href="#L284">284</a>
    </th>
    <td class="line-code">
      <pre>                                                                buffer_copy_string(ds-&gt;key, <span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_COUNTRY_CODE</span><span class="delimiter">&quot;</span></span>);
</pre>
    </td>
  </tr>
  <tr id="L285">
    <th class="line-num">
      <a href="#L285">285</a>
    </th>
    <td class="line-code">
      <pre>                                                                buffer_copy_string(ds-&gt;value, gir-&gt;country_code);
</pre>
    </td>
  </tr>
  <tr id="L286">
    <th class="line-num">
      <a href="#L286">286</a>
    </th>
    <td class="line-code">
      <pre>                                                                array_insert_unique(con-&gt;environment, (data_unset *)ds);
</pre>
    </td>
  </tr>
  <tr id="L287">
    <th class="line-num">
      <a href="#L287">287</a>
    </th>
    <td class="line-code">
      <pre>                                                }
</pre>
    </td>
  </tr>
  <tr id="L288">
    <th class="line-num">
      <a href="#L288">288</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L289">
    <th class="line-num">
      <a href="#L289">289</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="comment">/* get the country code 3 chars */</span>
</pre>
    </td>
  </tr>
  <tr id="L290">
    <th class="line-num">
      <a href="#L290">290</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_element(con-&gt;environment, CONST_STR_LEN(<span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_COUNTRY_CODE3</span><span class="delimiter">&quot;</span></span>)))) {
</pre>
    </td>
  </tr>
  <tr id="L291">
    <th class="line-num">
      <a href="#L291">291</a>
    </th>
    <td class="line-code">
      <pre>                                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_unused_element(con-&gt;environment, TYPE_STRING))) {
</pre>
    </td>
  </tr>
  <tr id="L292">
    <th class="line-num">
      <a href="#L292">292</a>
    </th>
    <td class="line-code">
      <pre>                                                                                ds = data_string_init();
</pre>
    </td>
  </tr>
  <tr id="L293">
    <th class="line-num">
      <a href="#L293">293</a>
    </th>
    <td class="line-code">
      <pre>                                                                }
</pre>
    </td>
  </tr>
  <tr id="L294">
    <th class="line-num">
      <a href="#L294">294</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L295">
    <th class="line-num">
      <a href="#L295">295</a>
    </th>
    <td class="line-code">
      <pre>                                                                buffer_copy_string(ds-&gt;key, <span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_COUNTRY_CODE3</span><span class="delimiter">&quot;</span></span>);
</pre>
    </td>
  </tr>
  <tr id="L296">
    <th class="line-num">
      <a href="#L296">296</a>
    </th>
    <td class="line-code">
      <pre>                                                                buffer_copy_string(ds-&gt;value, gir-&gt;country_code3);
</pre>
    </td>
  </tr>
  <tr id="L297">
    <th class="line-num">
      <a href="#L297">297</a>
    </th>
    <td class="line-code">
      <pre>                                                                array_insert_unique(con-&gt;environment, (data_unset *)ds);
</pre>
    </td>
  </tr>
  <tr id="L298">
    <th class="line-num">
      <a href="#L298">298</a>
    </th>
    <td class="line-code">
      <pre>                                                }
</pre>
    </td>
  </tr>
  <tr id="L299">
    <th class="line-num">
      <a href="#L299">299</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L300">
    <th class="line-num">
      <a href="#L300">300</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="comment">/* get the country name */</span>
</pre>
    </td>
  </tr>
  <tr id="L301">
    <th class="line-num">
      <a href="#L301">301</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_element(con-&gt;environment, CONST_STR_LEN(<span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_COUNTRY_NAME</span><span class="delimiter">&quot;</span></span>)))) {
</pre>
    </td>
  </tr>
  <tr id="L302">
    <th class="line-num">
      <a href="#L302">302</a>
    </th>
    <td class="line-code">
      <pre>                                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_unused_element(con-&gt;environment, TYPE_STRING))) {
</pre>
    </td>
  </tr>
  <tr id="L303">
    <th class="line-num">
      <a href="#L303">303</a>
    </th>
    <td class="line-code">
      <pre>                                                                                ds = data_string_init();
</pre>
    </td>
  </tr>
  <tr id="L304">
    <th class="line-num">
      <a href="#L304">304</a>
    </th>
    <td class="line-code">
      <pre>                                                                }
</pre>
    </td>
  </tr>
  <tr id="L305">
    <th class="line-num">
      <a href="#L305">305</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L306">
    <th class="line-num">
      <a href="#L306">306</a>
    </th>
    <td class="line-code">
      <pre>                                                                buffer_copy_string(ds-&gt;key, <span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_COUNTRY_NAME</span><span class="delimiter">&quot;</span></span>);
</pre>
    </td>
  </tr>
  <tr id="L307">
    <th class="line-num">
      <a href="#L307">307</a>
    </th>
    <td class="line-code">
      <pre>                                                                buffer_copy_string(ds-&gt;value, gir-&gt;country_name);
</pre>
    </td>
  </tr>
  <tr id="L308">
    <th class="line-num">
      <a href="#L308">308</a>
    </th>
    <td class="line-code">
      <pre>                                                                array_insert_unique(con-&gt;environment, (data_unset *)ds);
</pre>
    </td>
  </tr>
  <tr id="L309">
    <th class="line-num">
      <a href="#L309">309</a>
    </th>
    <td class="line-code">
      <pre>                                                }
</pre>
    </td>
  </tr>
  <tr id="L310">
    <th class="line-num">
      <a href="#L310">310</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L311">
    <th class="line-num">
      <a href="#L311">311</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="comment">/* get the city region */</span>
</pre>
    </td>
  </tr>
  <tr id="L312">
    <th class="line-num">
      <a href="#L312">312</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_element(con-&gt;environment, CONST_STR_LEN(<span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_CITY_REGION</span><span class="delimiter">&quot;</span></span>)))) {
</pre>
    </td>
  </tr>
  <tr id="L313">
    <th class="line-num">
      <a href="#L313">313</a>
    </th>
    <td class="line-code">
      <pre>                                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_unused_element(con-&gt;environment, TYPE_STRING))) {
</pre>
    </td>
  </tr>
  <tr id="L314">
    <th class="line-num">
      <a href="#L314">314</a>
    </th>
    <td class="line-code">
      <pre>                                                                                ds = data_string_init();
</pre>
    </td>
  </tr>
  <tr id="L315">
    <th class="line-num">
      <a href="#L315">315</a>
    </th>
    <td class="line-code">
      <pre>                                                                }
</pre>
    </td>
  </tr>
  <tr id="L316">
    <th class="line-num">
      <a href="#L316">316</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L317">
    <th class="line-num">
      <a href="#L317">317</a>
    </th>
    <td class="line-code">
      <pre>                                                                buffer_copy_string(ds-&gt;key, <span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_CITY_REGION</span><span class="delimiter">&quot;</span></span>);
</pre>
    </td>
  </tr>
  <tr id="L318">
    <th class="line-num">
      <a href="#L318">318</a>
    </th>
    <td class="line-code">
      <pre>                                                                buffer_copy_string(ds-&gt;value, gir-&gt;region);
</pre>
    </td>
  </tr>
  <tr id="L319">
    <th class="line-num">
      <a href="#L319">319</a>
    </th>
    <td class="line-code">
      <pre>                                                                array_insert_unique(con-&gt;environment, (data_unset *)ds);
</pre>
    </td>
  </tr>
  <tr id="L320">
    <th class="line-num">
      <a href="#L320">320</a>
    </th>
    <td class="line-code">
      <pre>                                                }
</pre>
    </td>
  </tr>
  <tr id="L321">
    <th class="line-num">
      <a href="#L321">321</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L322">
    <th class="line-num">
      <a href="#L322">322</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="comment">/* get the city */</span>
</pre>
    </td>
  </tr>
  <tr id="L323">
    <th class="line-num">
      <a href="#L323">323</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_element(con-&gt;environment, CONST_STR_LEN(<span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_CITY_NAME</span><span class="delimiter">&quot;</span></span>)))) {
</pre>
    </td>
  </tr>
  <tr id="L324">
    <th class="line-num">
      <a href="#L324">324</a>
    </th>
    <td class="line-code">
      <pre>                                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_unused_element(con-&gt;environment, TYPE_STRING))) {
</pre>
    </td>
  </tr>
  <tr id="L325">
    <th class="line-num">
      <a href="#L325">325</a>
    </th>
    <td class="line-code">
      <pre>                                                                                ds = data_string_init();
</pre>
    </td>
  </tr>
  <tr id="L326">
    <th class="line-num">
      <a href="#L326">326</a>
    </th>
    <td class="line-code">
      <pre>                                                                }
</pre>
    </td>
  </tr>
  <tr id="L327">
    <th class="line-num">
      <a href="#L327">327</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L328">
    <th class="line-num">
      <a href="#L328">328</a>
    </th>
    <td class="line-code">
      <pre>                                                                buffer_copy_string(ds-&gt;key, <span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_CITY_NAME</span><span class="delimiter">&quot;</span></span>);
</pre>
    </td>
  </tr>
  <tr id="L329">
    <th class="line-num">
      <a href="#L329">329</a>
    </th>
    <td class="line-code">
      <pre>                                                                buffer_copy_string(ds-&gt;value, gir-&gt;city);
</pre>
    </td>
  </tr>
  <tr id="L330">
    <th class="line-num">
      <a href="#L330">330</a>
    </th>
    <td class="line-code">
      <pre>                                                                array_insert_unique(con-&gt;environment, (data_unset *)ds);
</pre>
    </td>
  </tr>
  <tr id="L331">
    <th class="line-num">
      <a href="#L331">331</a>
    </th>
    <td class="line-code">
      <pre>                                                }
</pre>
    </td>
  </tr>
  <tr id="L332">
    <th class="line-num">
      <a href="#L332">332</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L333">
    <th class="line-num">
      <a href="#L333">333</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="comment">/* get the postal code */</span>
</pre>
    </td>
  </tr>
  <tr id="L334">
    <th class="line-num">
      <a href="#L334">334</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_element(con-&gt;environment, CONST_STR_LEN(<span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_CITY_POSTAL_CODE</span><span class="delimiter">&quot;</span></span>)))) {
</pre>
    </td>
  </tr>
  <tr id="L335">
    <th class="line-num">
      <a href="#L335">335</a>
    </th>
    <td class="line-code">
      <pre>                                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_unused_element(con-&gt;environment, TYPE_STRING))) {
</pre>
    </td>
  </tr>
  <tr id="L336">
    <th class="line-num">
      <a href="#L336">336</a>
    </th>
    <td class="line-code">
      <pre>                                                                                ds = data_string_init();
</pre>
    </td>
  </tr>
  <tr id="L337">
    <th class="line-num">
      <a href="#L337">337</a>
    </th>
    <td class="line-code">
      <pre>                                                                }
</pre>
    </td>
  </tr>
  <tr id="L338">
    <th class="line-num">
      <a href="#L338">338</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L339">
    <th class="line-num">
      <a href="#L339">339</a>
    </th>
    <td class="line-code">
      <pre>                                                                buffer_copy_string(ds-&gt;key, <span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_CITY_POSTAL_CODE</span><span class="delimiter">&quot;</span></span>);
</pre>
    </td>
  </tr>
  <tr id="L340">
    <th class="line-num">
      <a href="#L340">340</a>
    </th>
    <td class="line-code">
      <pre>                                                                buffer_copy_string(ds-&gt;value, gir-&gt;postal_code);
</pre>
    </td>
  </tr>
  <tr id="L341">
    <th class="line-num">
      <a href="#L341">341</a>
    </th>
    <td class="line-code">
      <pre>                                                                array_insert_unique(con-&gt;environment, (data_unset *)ds);
</pre>
    </td>
  </tr>
  <tr id="L342">
    <th class="line-num">
      <a href="#L342">342</a>
    </th>
    <td class="line-code">
      <pre>                                                }
</pre>
    </td>
  </tr>
  <tr id="L343">
    <th class="line-num">
      <a href="#L343">343</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L344">
    <th class="line-num">
      <a href="#L344">344</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="comment">/* get the latitude */</span>
</pre>
    </td>
  </tr>
  <tr id="L345">
    <th class="line-num">
      <a href="#L345">345</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_element(con-&gt;environment, CONST_STR_LEN(<span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_CITY_LATITUDE</span><span class="delimiter">&quot;</span></span>)))) {
</pre>
    </td>
  </tr>
  <tr id="L346">
    <th class="line-num">
      <a href="#L346">346</a>
    </th>
    <td class="line-code">
      <pre>                                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_unused_element(con-&gt;environment, TYPE_STRING))) {
</pre>
    </td>
  </tr>
  <tr id="L347">
    <th class="line-num">
      <a href="#L347">347</a>
    </th>
    <td class="line-code">
      <pre>                                                                                ds = data_string_init();
</pre>
    </td>
  </tr>
  <tr id="L348">
    <th class="line-num">
      <a href="#L348">348</a>
    </th>
    <td class="line-code">
      <pre>                                                                }
</pre>
    </td>
  </tr>
  <tr id="L349">
    <th class="line-num">
      <a href="#L349">349</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L350">
    <th class="line-num">
      <a href="#L350">350</a>
    </th>
    <td class="line-code">
      <pre>                                                                <span class="predefined-type">char</span> latitude[<span class="integer">32</span>];
</pre>
    </td>
  </tr>
  <tr id="L351">
    <th class="line-num">
      <a href="#L351">351</a>
    </th>
    <td class="line-code">
      <pre>                                                                sprintf(&amp;latitude, <span class="string"><span class="delimiter">&quot;</span><span class="content">%f</span><span class="delimiter">&quot;</span></span>, gir-&gt;latitude);
</pre>
    </td>
  </tr>
  <tr id="L352">
    <th class="line-num">
      <a href="#L352">352</a>
    </th>
    <td class="line-code">
      <pre>                                                                buffer_copy_string(ds-&gt;key, <span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_CITY_LATITUDE</span><span class="delimiter">&quot;</span></span>);
</pre>
    </td>
  </tr>
  <tr id="L353">
    <th class="line-num">
      <a href="#L353">353</a>
    </th>
    <td class="line-code">
      <pre>                                                                buffer_copy_string(ds-&gt;value, latitude);
</pre>
    </td>
  </tr>
  <tr id="L354">
    <th class="line-num">
      <a href="#L354">354</a>
    </th>
    <td class="line-code">
      <pre>                                                                array_insert_unique(con-&gt;environment, (data_unset *)ds);
</pre>
    </td>
  </tr>
  <tr id="L355">
    <th class="line-num">
      <a href="#L355">355</a>
    </th>
    <td class="line-code">
      <pre>                                                }
</pre>
    </td>
  </tr>
  <tr id="L356">
    <th class="line-num">
      <a href="#L356">356</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L357">
    <th class="line-num">
      <a href="#L357">357</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="comment">/* get the long latitude */</span>
</pre>
    </td>
  </tr>
  <tr id="L358">
    <th class="line-num">
      <a href="#L358">358</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_element(con-&gt;environment, CONST_STR_LEN(<span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_CITY_LONG_LATITUDE</span><span class="delimiter">&quot;</span></span>)))) {
</pre>
    </td>
  </tr>
  <tr id="L359">
    <th class="line-num">
      <a href="#L359">359</a>
    </th>
    <td class="line-code">
      <pre>                                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_unused_element(con-&gt;environment, TYPE_STRING))) {
</pre>
    </td>
  </tr>
  <tr id="L360">
    <th class="line-num">
      <a href="#L360">360</a>
    </th>
    <td class="line-code">
      <pre>                                                                                ds = data_string_init();
</pre>
    </td>
  </tr>
  <tr id="L361">
    <th class="line-num">
      <a href="#L361">361</a>
    </th>
    <td class="line-code">
      <pre>                                                                }
</pre>
    </td>
  </tr>
  <tr id="L362">
    <th class="line-num">
      <a href="#L362">362</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L363">
    <th class="line-num">
      <a href="#L363">363</a>
    </th>
    <td class="line-code">
      <pre>                                                                <span class="predefined-type">char</span> long_latitude[<span class="integer">32</span>];
</pre>
    </td>
  </tr>
  <tr id="L364">
    <th class="line-num">
      <a href="#L364">364</a>
    </th>
    <td class="line-code">
      <pre>                                                                sprintf(&amp;long_latitude, <span class="string"><span class="delimiter">&quot;</span><span class="content">%f</span><span class="delimiter">&quot;</span></span>, gir-&gt;longitude);
</pre>
    </td>
  </tr>
  <tr id="L365">
    <th class="line-num">
      <a href="#L365">365</a>
    </th>
    <td class="line-code">
      <pre>                                                                buffer_copy_string(ds-&gt;key, <span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_CITY_LONG_LATITUDE</span><span class="delimiter">&quot;</span></span>);
</pre>
    </td>
  </tr>
  <tr id="L366">
    <th class="line-num">
      <a href="#L366">366</a>
    </th>
    <td class="line-code">
      <pre>                                                                buffer_copy_string(ds-&gt;value, long_latitude);
</pre>
    </td>
  </tr>
  <tr id="L367">
    <th class="line-num">
      <a href="#L367">367</a>
    </th>
    <td class="line-code">
      <pre>                                                                array_insert_unique(con-&gt;environment, (data_unset *)ds);
</pre>
    </td>
  </tr>
  <tr id="L368">
    <th class="line-num">
      <a href="#L368">368</a>
    </th>
    <td class="line-code">
      <pre>                                                }
</pre>
    </td>
  </tr>
  <tr id="L369">
    <th class="line-num">
      <a href="#L369">369</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L370">
    <th class="line-num">
      <a href="#L370">370</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="comment">/* get the dma code */</span>
</pre>
    </td>
  </tr>
  <tr id="L371">
    <th class="line-num">
      <a href="#L371">371</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_element(con-&gt;environment, CONST_STR_LEN(<span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_CITY_DMA_CODE</span><span class="delimiter">&quot;</span></span>)))) {
</pre>
    </td>
  </tr>
  <tr id="L372">
    <th class="line-num">
      <a href="#L372">372</a>
    </th>
    <td class="line-code">
      <pre>                                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_unused_element(con-&gt;environment, TYPE_STRING))) {
</pre>
    </td>
  </tr>
  <tr id="L373">
    <th class="line-num">
      <a href="#L373">373</a>
    </th>
    <td class="line-code">
      <pre>                                                                                ds = data_string_init();
</pre>
    </td>
  </tr>
  <tr id="L374">
    <th class="line-num">
      <a href="#L374">374</a>
    </th>
    <td class="line-code">
      <pre>                                                                }
</pre>
    </td>
  </tr>
  <tr id="L375">
    <th class="line-num">
      <a href="#L375">375</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L376">
    <th class="line-num">
      <a href="#L376">376</a>
    </th>
    <td class="line-code">
      <pre>                                                                <span class="predefined-type">char</span> dc[<span class="integer">5</span>];
</pre>
    </td>
  </tr>
  <tr id="L377">
    <th class="line-num">
      <a href="#L377">377</a>
    </th>
    <td class="line-code">
      <pre>                                                                sprintf(&amp;dc, <span class="string"><span class="delimiter">&quot;</span><span class="content">%i</span><span class="delimiter">&quot;</span></span>, gir-&gt;dma_code);
</pre>
    </td>
  </tr>
  <tr id="L378">
    <th class="line-num">
      <a href="#L378">378</a>
    </th>
    <td class="line-code">
      <pre>                                                                buffer_copy_string(ds-&gt;key, <span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_CITY_DMA_CODE</span><span class="delimiter">&quot;</span></span>);
</pre>
    </td>
  </tr>
  <tr id="L379">
    <th class="line-num">
      <a href="#L379">379</a>
    </th>
    <td class="line-code">
      <pre>                                                                buffer_copy_string(ds-&gt;value, dc);
</pre>
    </td>
  </tr>
  <tr id="L380">
    <th class="line-num">
      <a href="#L380">380</a>
    </th>
    <td class="line-code">
      <pre>                                                                array_insert_unique(con-&gt;environment, (data_unset *)ds);
</pre>
    </td>
  </tr>
  <tr id="L381">
    <th class="line-num">
      <a href="#L381">381</a>
    </th>
    <td class="line-code">
      <pre>                                                }
</pre>
    </td>
  </tr>
  <tr id="L382">
    <th class="line-num">
      <a href="#L382">382</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L383">
    <th class="line-num">
      <a href="#L383">383</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="comment">/* get the area code */</span>
</pre>
    </td>
  </tr>
  <tr id="L384">
    <th class="line-num">
      <a href="#L384">384</a>
    </th>
    <td class="line-code">
      <pre>                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_element(con-&gt;environment, CONST_STR_LEN(<span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_CITY_AREA_CODE</span><span class="delimiter">&quot;</span></span>)))) {
</pre>
    </td>
  </tr>
  <tr id="L385">
    <th class="line-num">
      <a href="#L385">385</a>
    </th>
    <td class="line-code">
      <pre>                                                                <span class="keyword">if</span> (<span class="predefined-constant">NULL</span> == (ds = (data_string *)array_get_unused_element(con-&gt;environment, TYPE_STRING))) {
</pre>
    </td>
  </tr>
  <tr id="L386">
    <th class="line-num">
      <a href="#L386">386</a>
    </th>
    <td class="line-code">
      <pre>                                                                                ds = data_string_init();
</pre>
    </td>
  </tr>
  <tr id="L387">
    <th class="line-num">
      <a href="#L387">387</a>
    </th>
    <td class="line-code">
      <pre>                                                                }
</pre>
    </td>
  </tr>
  <tr id="L388">
    <th class="line-num">
      <a href="#L388">388</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L389">
    <th class="line-num">
      <a href="#L389">389</a>
    </th>
    <td class="line-code">
      <pre>                                                                <span class="predefined-type">char</span> ac[<span class="integer">5</span>];
</pre>
    </td>
  </tr>
  <tr id="L390">
    <th class="line-num">
      <a href="#L390">390</a>
    </th>
    <td class="line-code">
      <pre>                                                                sprintf(&amp;ac, <span class="string"><span class="delimiter">&quot;</span><span class="content">%i</span><span class="delimiter">&quot;</span></span>, gir-&gt;area_code);
</pre>
    </td>
  </tr>
  <tr id="L391">
    <th class="line-num">
      <a href="#L391">391</a>
    </th>
    <td class="line-code">
      <pre>                                                                buffer_copy_string(ds-&gt;key, <span class="string"><span class="delimiter">&quot;</span><span class="content">GEOIP_CITY_AREA_CODE</span><span class="delimiter">&quot;</span></span>);
</pre>
    </td>
  </tr>
  <tr id="L392">
    <th class="line-num">
      <a href="#L392">392</a>
    </th>
    <td class="line-code">
      <pre>                                                                array_insert_unique(con-&gt;environment, (data_unset *)ds);
</pre>
    </td>
  </tr>
  <tr id="L393">
    <th class="line-num">
      <a href="#L393">393</a>
    </th>
    <td class="line-code">
      <pre>                                                                buffer_copy_string(ds-&gt;value, ac);
</pre>
    </td>
  </tr>
  <tr id="L394">
    <th class="line-num">
      <a href="#L394">394</a>
    </th>
    <td class="line-code">
      <pre>                                                }
</pre>
    </td>
  </tr>
  <tr id="L395">
    <th class="line-num">
      <a href="#L395">395</a>
    </th>
    <td class="line-code">
      <pre>                                }
</pre>
    </td>
  </tr>
  <tr id="L396">
    <th class="line-num">
      <a href="#L396">396</a>
    </th>
    <td class="line-code">
      <pre>                }
</pre>
    </td>
  </tr>
  <tr id="L397">
    <th class="line-num">
      <a href="#L397">397</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L398">
    <th class="line-num">
      <a href="#L398">398</a>
    </th>
    <td class="line-code">
      <pre>                <span class="comment">/* keep walking... (johnnie walker style ;) */</span>
</pre>
    </td>
  </tr>
  <tr id="L399">
    <th class="line-num">
      <a href="#L399">399</a>
    </th>
    <td class="line-code">
      <pre>                <span class="keyword">return</span> HANDLER_GO_ON;
</pre>
    </td>
  </tr>
  <tr id="L400">
    <th class="line-num">
      <a href="#L400">400</a>
    </th>
    <td class="line-code">
      <pre>}
</pre>
    </td>
  </tr>
  <tr id="L401">
    <th class="line-num">
      <a href="#L401">401</a>
    </th>
    <td class="line-code">
      <pre>        
</pre>
    </td>
  </tr>
  <tr id="L402">
    <th class="line-num">
      <a href="#L402">402</a>
    </th>
    <td class="line-code">
      <pre><span class="comment">/* this function is called at dlopen() time and inits the callbacks */</span>
</pre>
    </td>
  </tr>
  <tr id="L403">
    <th class="line-num">
      <a href="#L403">403</a>
    </th>
    <td class="line-code">
      <pre>
</pre>
    </td>
  </tr>
  <tr id="L404">
    <th class="line-num">
      <a href="#L404">404</a>
    </th>
    <td class="line-code">
      <pre><span class="predefined-type">int</span> mod_geoip_plugin_init(plugin *p) {
</pre>
    </td>
  </tr>
  <tr id="L405">
    <th class="line-num">
      <a href="#L405">405</a>
    </th>
    <td class="line-code">
      <pre>        p-&gt;version      = LIGHTTPD_VERSION_ID;
</pre>
    </td>
  </tr>
  <tr id="L406">
    <th class="line-num">
      <a href="#L406">406</a>
    </th>
    <td class="line-code">
      <pre>        p-&gt;name         = buffer_init_string(<span class="string"><span class="delimiter">&quot;</span><span class="content">geoip</span><span class="delimiter">&quot;</span></span>);
</pre>
    </td>
  </tr>
  <tr id="L407">
    <th class="line-num">
      <a href="#L407">407</a>
    </th>
    <td class="line-code">
      <pre>        
</pre>
    </td>
  </tr>
  <tr id="L408">
    <th class="line-num">
      <a href="#L408">408</a>
    </th>
    <td class="line-code">
      <pre>        p-&gt;init         = mod_geoip_init;
</pre>
    </td>
  </tr>
  <tr id="L409">
    <th class="line-num">
      <a href="#L409">409</a>
    </th>
    <td class="line-code">
      <pre>        p-&gt;handle_start_backend = mod_geoip_subrequest;
</pre>
    </td>
  </tr>
  <tr id="L410">
    <th class="line-num">
      <a href="#L410">410</a>
    </th>
    <td class="line-code">
      <pre>        p-&gt;set_defaults = mod_geoip_set_defaults;
</pre>
    </td>
  </tr>
  <tr id="L411">
    <th class="line-num">
      <a href="#L411">411</a>
    </th>
    <td class="line-code">
      <pre>        p-&gt;cleanup      = mod_geoip_free;
</pre>
    </td>
  </tr>
  <tr id="L412">
    <th class="line-num">
      <a href="#L412">412</a>
    </th>
    <td class="line-code">
      <pre>        
</pre>
    </td>
  </tr>
  <tr id="L413">
    <th class="line-num">
      <a href="#L413">413</a>
    </th>
    <td class="line-code">
      <pre>        p-&gt;data         = <span class="predefined-constant">NULL</span>;
</pre>
    </td>
  </tr>
  <tr id="L414">
    <th class="line-num">
      <a href="#L414">414</a>
    </th>
    <td class="line-code">
      <pre>        
</pre>
    </td>
  </tr>
  <tr id="L415">
    <th class="line-num">
      <a href="#L415">415</a>
    </th>
    <td class="line-code">
      <pre>        <span class="keyword">return</span> <span class="integer">0</span>;
</pre>
    </td>
  </tr>
  <tr id="L416">
    <th class="line-num">
      <a href="#L416">416</a>
    </th>
    <td class="line-code">
      <pre>}</pre>
    </td>
  </tr>
</tbody>
</table>
</div>




        
        <div style="clear:both;"></div>
    </div>
</div>
</div>

<div id="ajax-indicator" style="display:none;"><span>Loading...</span></div>
<div id="ajax-modal" style="display:none;"></div>

<div id="footer">
  <div class="bgl"><div class="bgr">
    Powered by <a href="http://www.redmine.org/">Redmine</a> &copy; 2006-2014 Jean-Philippe Lang
  </div></div>
</div>
</div>
</div>

</body>
</html>
