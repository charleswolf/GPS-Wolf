
    

  

<!DOCTYPE html>
<html>
  <head>
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="chrome=1">
    <script type="text/javascript">var NREUMQ=[];NREUMQ.push(["mark","firstbyte",new Date().getTime()]);</script>
        <title>lib/diskio.h at master from FitnessMonitor/Fitness-Monitor - GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />

    <link href="https://a248.e.akamai.net/assets.github.com/66aaf3d4b284bb22abf5881cfb27cd271aff5d56/stylesheets/bundle_github.css" media="screen" rel="stylesheet" type="text/css" />
    

    <script type="text/javascript">
      if (typeof console == "undefined" || typeof console.log == "undefined")
        console = { log: function() {} }
    </script>
    <script type="text/javascript" charset="utf-8">
      var GitHub = {
        assetHost: 'https://a248.e.akamai.net/assets.github.com'
      }
      var github_user = 'charleswolf'
      
    </script>
    <script src="https://a248.e.akamai.net/assets.github.com/javascripts/jquery/jquery-1.6.1.min.js" type="text/javascript"></script>
    <script src="https://a248.e.akamai.net/assets.github.com/b5b6f64f5d8dda0762bb9050e902376067c55746/javascripts/bundle_github.js" type="text/javascript"></script>


    
    <script type="text/javascript" charset="utf-8">
      GitHub.spy({
        repo: "FitnessMonitor/Fitness-Monitor"
      })
    </script>

    
  <link rel='canonical' href='/FitnessMonitor/Fitness-Monitor/blob/c00ed1795f90a165e3f518b7aa213d9f5b953757/lib/diskio.h'>

  <link href="https://github.com/FitnessMonitor/Fitness-Monitor/commits/master.atom" rel="alternate" title="Recent Commits to Fitness-Monitor:master" type="application/atom+xml" />

        <meta name="description" content="Fitness-Monitor - MNSU Sr. Design Project" />
    <script type="text/javascript">
      GitHub.nameWithOwner = GitHub.nameWithOwner || "FitnessMonitor/Fitness-Monitor";
      GitHub.currentRef = 'master';
      GitHub.commitSHA = "c00ed1795f90a165e3f518b7aa213d9f5b953757";
      GitHub.currentPath = 'lib/diskio.h';
      GitHub.masterBranch = "master";

      
    </script>
  

        <script type="text/javascript">
      var _gaq = _gaq || [];
      _gaq.push(['_setAccount', 'UA-3769691-2']);
      _gaq.push(['_setDomainName', 'none']);
      _gaq.push(['_trackPageview']);
      _gaq.push(['_trackPageLoadTime']);
      (function() {
        var ga = document.createElement('script');
        ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
        ga.setAttribute('async', 'true');
        document.documentElement.firstChild.appendChild(ga);
      })();
    </script>

    
  </head>

  

  <body class="logged_in page-blob linux env-production">
    

    

    

    <div class="subnavd" id="main">
      <div id="header" class="true">
        
          <a class="logo boring" href="https://github.com/">
            
            <img alt="github" class="default" height="45" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov5.png" />
            <!--[if (gt IE 8)|!(IE)]><!-->
            <img alt="github" class="hover" height="45" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov5-hover.png" />
            <!--<![endif]-->
          </a>
        
        
          





  
    <div class="userbox">
      <div class="avatarname">
        <a href="https://github.com/charleswolf"><img src="https://secure.gravatar.com/avatar/ed49248e89f0645465b22f4e534dd25e?s=140&d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-140.png" alt="" width="20" height="20"  /></a>
        <a href="https://github.com/charleswolf" class="name">charleswolf</a>

        
        
      </div>
      <ul class="usernav">
        <li><a href="https://github.com/">Dashboard</a></li>
        <li>
          
          <a href="https://github.com/inbox">Inbox</a>
          <a href="https://github.com/inbox" class="unread_count ">0</a>
        </li>
        <li><a href="https://github.com/account">Account Settings</a></li>
        <li><a href="/logout">Log Out</a></li>
      </ul>
    </div><!-- /.userbox -->
  


        
        <div class="topsearch">
  
    <form action="/search" id="top_search_form" method="get">
      <a href="/search" class="advanced-search tooltipped downwards" title="Advanced Search">Advanced Search</a>
      <div class="search placeholder-field js-placeholder-field">
        <label class="placeholder" for="global-search-field">Search…</label>
        <input type="text" class="search my_repos_autocompleter" id="global-search-field" name="q" results="5" /> <input type="submit" value="Search" class="button" />
      </div>
      <input type="hidden" name="type" value="Everything" />
      <input type="hidden" name="repo" value="" />
      <input type="hidden" name="langOverride" value="" />
      <input type="hidden" name="start_value" value="1" />
    </form>
    <ul class="nav">
      <li><a href="/explore">Explore GitHub</a></li>
      <li><a href="https://gist.github.com">Gist</a></li>
      
      <li><a href="/blog">Blog</a></li>
      
      <li><a href="http://help.github.com">Help</a></li>
    </ul>
  
</div>

      </div>

      
      
        
    <div class="site">
      <div class="pagehead repohead vis-public    instapaper_ignore readability-menu">

      

      <div class="title-actions-bar">
        <h1>
          <a href="/FitnessMonitor">FitnessMonitor</a> / <strong><a href="/FitnessMonitor/Fitness-Monitor">Fitness-Monitor</a></strong>
          
          
        </h1>

        
    <ul class="actions">
      

      
        <li class="for-owner" style="display:none"><a href="/FitnessMonitor/Fitness-Monitor/admin" class="minibutton btn-admin "><span><span class="icon"></span>Admin</span></a></li>
        <li>
          <a href="/FitnessMonitor/Fitness-Monitor/toggle_watch" class="minibutton btn-watch " id="watch_button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', 'b25738058da11465ca8bba73de0553dc0c0e01e9'); f.appendChild(s);f.submit();return false;" style="display:none"><span><span class="icon"></span>Watch</span></a>
          <a href="/FitnessMonitor/Fitness-Monitor/toggle_watch" class="minibutton btn-watch " id="unwatch_button" onclick="var f = document.createElement('form'); f.style.display = 'none'; this.parentNode.appendChild(f); f.method = 'POST'; f.action = this.href;var s = document.createElement('input'); s.setAttribute('type', 'hidden'); s.setAttribute('name', 'authenticity_token'); s.setAttribute('value', 'b25738058da11465ca8bba73de0553dc0c0e01e9'); f.appendChild(s);f.submit();return false;" style="display:none"><span><span class="icon"></span>Unwatch</span></a>
        </li>
        
          
            <li class="for-notforked"><a href="#fork_box" class="minibutton btn-fork " rel="facebox"><span><span class="icon"></span>Fork</span></a></li>
            

            <div id="fork_box" style="display:none">
              <h2>Where do you want to fork this to?</h2>
              
                <div class="full-button">
                  <form action="/FitnessMonitor/Fitness-Monitor/fork" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="b25738058da11465ca8bba73de0553dc0c0e01e9" /></div>
                    <button class="classy"><span>Fork to charleswolf</span></button>
                  </form>
                </div>
              
              
                <div class="rule"></div>
                
                  <p>Already forked to FitnessMonitor!  <a href="/FitnessMonitor/Fitness-Monitor">Go to the fork</a></p>
                
              
            </div>
          

          <li id='pull_request_item' class='nspr' style='display:none'><a href="/FitnessMonitor/Fitness-Monitor/pull/new/master" class="minibutton btn-pull-request "><span><span class="icon"></span>Pull Request</span></a></li>
        
      
      
      <li class="repostats">
        <ul class="repo-stats">
          <li class="watchers"><a href="/FitnessMonitor/Fitness-Monitor/watchers" title="Watchers" class="tooltipped downwards">4</a></li>
          <li class="forks"><a href="/FitnessMonitor/Fitness-Monitor/network" title="Forks" class="tooltipped downwards">1</a></li>
        </ul>
      </li>
    </ul>

      </div>

        
  <ul class="tabs">
    <li><a href="/FitnessMonitor/Fitness-Monitor" class="selected" highlight="repo_source">Source</a></li>
    <li><a href="/FitnessMonitor/Fitness-Monitor/commits/master" highlight="repo_commits">Commits</a></li>
    <li><a href="/FitnessMonitor/Fitness-Monitor/network" highlight="repo_network">Network</a></li>
    <li><a href="/FitnessMonitor/Fitness-Monitor/pulls" highlight="repo_pulls">Pull Requests (0)</a></li>

    
      <li><a href="/FitnessMonitor/Fitness-Monitor/forkqueue" highlight="repo_fork_queue">Fork Queue</a></li>
    

    
      
      <li><a href="/FitnessMonitor/Fitness-Monitor/issues" highlight="issues">Issues (0)</a></li>
    

                <li><a href="/FitnessMonitor/Fitness-Monitor/wiki" highlight="repo_wiki">Wiki (0)</a></li>
        
    <li><a href="/FitnessMonitor/Fitness-Monitor/graphs" highlight="repo_graphs">Graphs</a></li>

    <li class="contextswitch nochoices">
      <span class="toggle leftwards" >
        <em>Branch:</em>
        <code>master</code>
      </span>
    </li>
  </ul>

  <div style="display:none" id="pl-description"><p><em class="placeholder">click here to add a description</em></p></div>
  <div style="display:none" id="pl-homepage"><p><em class="placeholder">click here to add a homepage</em></p></div>

  <div class="subnav-bar">
  
  <ul>
    <li>
      <a href="/FitnessMonitor/Fitness-Monitor/branches" class="dropdown">Switch Branches (4)</a>
      <ul>
        
          
          
            <li><a href="/FitnessMonitor/Fitness-Monitor/blob/charles/lib/diskio.h" data-name="charles">charles</a></li>
          
        
          
          
            <li><a href="/FitnessMonitor/Fitness-Monitor/blob/dancole/lib/diskio.h" data-name="dancole">dancole</a></li>
          
        
          
            <li><strong>master &#x2713;</strong></li>
            
          
          
            <li><a href="/FitnessMonitor/Fitness-Monitor/blob/norm/lib/diskio.h" data-name="norm">norm</a></li>
          
        
      </ul>
    </li>
    <li>
      <a href="#" class="dropdown defunct">Switch Tags (0)</a>
      
    </li>
    <li>
    
    <a href="/FitnessMonitor/Fitness-Monitor/branches" class="manage">Branch List</a>
    
    </li>
  </ul>
</div>

  
  
  
  
  
  



        
    <div id="repo_details" class="metabox clearfix">
      <div id="repo_details_loader" class="metabox-loader" style="display:none">Sending Request&hellip;</div>

        <a href="/FitnessMonitor/Fitness-Monitor/downloads" class="download-source" id="download_button" title="Download source, tagged packages and binaries."><span class="icon"></span>Downloads</a>

      <div id="repository_desc_wrapper">
      <div id="repository_description" rel="repository_description_edit">
        
          <p>MNSU Sr. Design Project
            <span id="read_more" style="display:none">&mdash; <a href="#readme">Read more</a></span>
          </p>
        
      </div>

      <div id="repository_description_edit" style="display:none;" class="inline-edit">
        <form action="/FitnessMonitor/Fitness-Monitor/admin/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="b25738058da11465ca8bba73de0553dc0c0e01e9" /></div>
          <input type="hidden" name="field" value="repository_description">
          <input type="text" class="textfield" name="value" value="MNSU Sr. Design Project">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>

      
      <div class="repository-homepage" id="repository_homepage" rel="repository_homepage_edit">
        <p><a href="http://" rel="nofollow"></a></p>
      </div>

      <div id="repository_homepage_edit" style="display:none;" class="inline-edit">
        <form action="/FitnessMonitor/Fitness-Monitor/admin/update" method="post"><div style="margin:0;padding:0"><input name="authenticity_token" type="hidden" value="b25738058da11465ca8bba73de0553dc0c0e01e9" /></div>
          <input type="hidden" name="field" value="repository_homepage">
          <input type="text" class="textfield" name="value" value="">
          <div class="form-actions">
            <button class="minibutton"><span>Save</span></button> &nbsp; <a href="#" class="cancel">Cancel</a>
          </div>
        </form>
      </div>
      </div>
      <div class="rule "></div>
      <div id="url_box" class="url-box">
  

  <ul class="clone-urls">
    
      
        <li id="private_clone_url"><a href="git@github.com:FitnessMonitor/Fitness-Monitor.git" data-permissions="Read+Write">SSH</a></li>
      
      <li id="http_clone_url"><a href="https://charleswolf@github.com/FitnessMonitor/Fitness-Monitor.git" data-permissions="Read+Write">HTTP</a></li>
      <li id="public_clone_url"><a href="git://github.com/FitnessMonitor/Fitness-Monitor.git" data-permissions="Read-Only">Git Read-Only</a></li>
    
    
  </ul>
  <input type="text" spellcheck="false" id="url_field" class="url-field" />
        <span style="display:none" id="url_box_clippy"></span>
      <span id="clippy_tooltip_url_box_clippy" class="clippy-tooltip tooltipped" title="copy to clipboard">
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="14"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="https://a248.e.akamai.net/assets.github.com/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=url_box_clippy&amp;copied=&amp;copyto=">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="https://a248.e.akamai.net/assets.github.com/flash/clippy.swf?v5"
             width="14"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=url_box_clippy&amp;copied=&amp;copyto="
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      </span>

  <p id="url_description"><strong>Read+Write</strong> access</p>
</div>

    </div>

    <div class="frame frame-center tree-finder" style="display:none">
      <div class="breadcrumb">
        <b><a href="/FitnessMonitor/Fitness-Monitor">Fitness-Monitor</a></b> /
        <input class="tree-finder-input" type="text" name="query" autocomplete="off" spellcheck="false">
      </div>

      
        <div class="octotip">
          <p>
            <a href="/FitnessMonitor/Fitness-Monitor/dismiss-tree-finder-help" class="dismiss js-dismiss-tree-list-help" title="Hide this notice forever">Dismiss</a>
            <strong>Octotip:</strong> You've activated the <em>file finder</em> by pressing <span class="kbd">t</span>
            Start typing to filter the file list. Use <span class="kbd badmono">↑</span> and <span class="kbd badmono">↓</span> to navigate,
            <span class="kbd">enter</span> to view files.
          </p>
        </div>
      

      <table class="tree-browser" cellpadding="0" cellspacing="0">
        <tr class="js-header"><th>&nbsp;</th><th>name</th></tr>
        <tr class="js-no-results no-results" style="display: none">
          <th colspan="2">No matching files</th>
        </tr>
        <tbody class="js-results-list">
        </tbody>
      </table>
    </div>

    <div id="jump-to-line" style="display:none">
      <h2>Jump to Line</h2>
      <form>
        <input class="textfield" type="text">
        <div class="full-button">
          <button type="submit" class="classy">
            <span>Go</span>
          </button>
        </div>
      </form>
    </div>


        

      </div><!-- /.pagehead -->

      

  







<script type="text/javascript">
  GitHub.downloadRepo = '/FitnessMonitor/Fitness-Monitor/archives/master'
  GitHub.revType = "master"

  GitHub.repoName = "Fitness-Monitor"
  GitHub.controllerName = "blob"
  GitHub.actionName     = "show"
  GitHub.currentAction  = "blob#show"

  
    GitHub.loggedIn = true
    GitHub.hasWriteAccess = true
    GitHub.hasAdminAccess = true
    GitHub.watchingRepo = true
    GitHub.ignoredRepo = false
    GitHub.hasForkOfRepo = ""
    GitHub.hasForked = false
  

  
</script>




<div class="flash-messages"></div>


  <div id="commit">
    <div class="group">
        
  <div class="envelope commit">
    <div class="human">
      
        <div class="message"><pre><a href="/FitnessMonitor/Fitness-Monitor/commit/c00ed1795f90a165e3f518b7aa213d9f5b953757">added parts list</a> </pre></div>
      

      <div class="actor">
        <div class="gravatar">
          
          <img src="https://secure.gravatar.com/avatar/ed49248e89f0645465b22f4e534dd25e?s=140&d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-140.png" alt="" width="30" height="30"  />
        </div>
        <div class="name"><a href="/charleswolf">charleswolf</a> <span>(author)</span></div>
        <div class="date">
          <time class="js-relative-date" datetime="2010-12-02T08:40:46-08:00" title="2010-12-02 08:40:46">December 02, 2010</time>
        </div>
      </div>

      

    </div>
    <div class="machine">
      <span>c</span>ommit&nbsp;&nbsp;<a href="/FitnessMonitor/Fitness-Monitor/commit/c00ed1795f90a165e3f518b7aa213d9f5b953757" hotkey="c">c00ed1795f90a165e3f5</a><br />
      <span>t</span>ree&nbsp;&nbsp;&nbsp;&nbsp;<a href="/FitnessMonitor/Fitness-Monitor/tree/c00ed1795f90a165e3f518b7aa213d9f5b953757" hotkey="t">7be3d1280c0baeb6fa7e</a><br />
      
        <span>p</span>arent&nbsp;
        
        <a href="/FitnessMonitor/Fitness-Monitor/tree/754cfae83900defe1ec249d021abb54839f2a9ba" hotkey="p">754cfae83900defe1ec2</a>
      

    </div>
  </div>

    </div>
  </div>



  <div id="slider">

  

    <div class="breadcrumb" data-path="lib/diskio.h/">
      <b><a href="/FitnessMonitor/Fitness-Monitor/tree/c00ed1795f90a165e3f518b7aa213d9f5b953757">Fitness-Monitor</a></b> / <a href="/FitnessMonitor/Fitness-Monitor/tree/c00ed1795f90a165e3f518b7aa213d9f5b953757/lib">lib</a> / diskio.h       <span style="display:none" id="clippy_4967">lib/diskio.h</span>
      
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="110"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="https://a248.e.akamai.net/assets.github.com/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=clippy_4967&amp;copied=copied!&amp;copyto=copy to clipboard">
      <param name="bgcolor" value="#FFFFFF">
      <param name="wmode" value="opaque">
      <embed src="https://a248.e.akamai.net/assets.github.com/flash/clippy.swf?v5"
             width="110"
             height="14"
             name="clippy"
             quality="high"
             allowScriptAccess="always"
             type="application/x-shockwave-flash"
             pluginspage="http://www.macromedia.com/go/getflashplayer"
             FlashVars="id=clippy_4967&amp;copied=copied!&amp;copyto=copy to clipboard"
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      

    </div>

    <div class="frames">
      <div class="frame frame-center" data-path="lib/diskio.h/" data-canonical-url="/FitnessMonitor/Fitness-Monitor/blob/c00ed1795f90a165e3f518b7aa213d9f5b953757/lib/diskio.h">
        
          <ul class="big-actions">
            
            <li><a class="file-edit-link minibutton" href="/FitnessMonitor/Fitness-Monitor/edit/__current_ref__/lib/diskio.h"><span>Edit this file</span></a></li>
          </ul>
        

        <div id="files">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><img alt="Txt" height="16" src="https://a248.e.akamai.net/assets.github.com/images/icons/txt.png" width="16" /></span>
                <span class="mode" title="File Mode">100644</span>
                
                  <span>80 lines (56 sloc)</span>
                
                <span>2.456 kb</span>
              </div>
              <ul class="actions">
                <li><a href="/FitnessMonitor/Fitness-Monitor/raw/master/lib/diskio.h" id="raw-url">raw</a></li>
                
                  <li><a href="/FitnessMonitor/Fitness-Monitor/blame/master/lib/diskio.h">blame</a></li>
                
                <li><a href="/FitnessMonitor/Fitness-Monitor/commits/master/lib/diskio.h">history</a></li>
              </ul>
            </div>
            
  <div class="data type-c">
    
      <table cellpadding="0" cellspacing="0">
        <tr>
          <td>
            <pre class="line_numbers"><span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
</pre>
          </td>
          <td width="100%">
            
              
                <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*-----------------------------------------------------------------------</span></div><div class='line' id='LC2'><span class="cm">/  Low level disk interface modlue include file   (C)ChaN, 2010</span></div><div class='line' id='LC3'><span class="cm">/-----------------------------------------------------------------------*/</span></div><div class='line' id='LC4'><br/></div><div class='line' id='LC5'><span class="cp">#ifndef _DISKIO</span></div><div class='line' id='LC6'><br/></div><div class='line' id='LC7'><span class="cp">#define _READONLY	0	</span><span class="cm">/* 1: Remove write functions */</span><span class="cp"></span></div><div class='line' id='LC8'><span class="cp">#define _USE_IOCTL	1	</span><span class="cm">/* 1: Use disk_ioctl fucntion */</span><span class="cp"></span></div><div class='line' id='LC9'><br/></div><div class='line' id='LC10'><span class="cp">#include &quot;integer.h&quot;</span></div><div class='line' id='LC11'><br/></div><div class='line' id='LC12'><br/></div><div class='line' id='LC13'><span class="cm">/* Status of Disk Functions */</span></div><div class='line' id='LC14'><span class="k">typedef</span> <span class="n">BYTE</span>	<span class="n">DSTATUS</span><span class="p">;</span></div><div class='line' id='LC15'><br/></div><div class='line' id='LC16'><span class="cm">/* Results of Disk Functions */</span></div><div class='line' id='LC17'><span class="k">typedef</span> <span class="k">enum</span> <span class="p">{</span></div><div class='line' id='LC18'>	<span class="n">RES_OK</span> <span class="o">=</span> <span class="mi">0</span><span class="p">,</span>		<span class="cm">/* 0: Successful */</span></div><div class='line' id='LC19'>	<span class="n">RES_ERROR</span><span class="p">,</span>		<span class="cm">/* 1: R/W Error */</span></div><div class='line' id='LC20'>	<span class="n">RES_WRPRT</span><span class="p">,</span>		<span class="cm">/* 2: Write Protected */</span></div><div class='line' id='LC21'>	<span class="n">RES_NOTRDY</span><span class="p">,</span>		<span class="cm">/* 3: Not Ready */</span></div><div class='line' id='LC22'>	<span class="n">RES_PARERR</span>		<span class="cm">/* 4: Invalid Parameter */</span></div><div class='line' id='LC23'><span class="p">}</span> <span class="n">DRESULT</span><span class="p">;</span></div><div class='line' id='LC24'><br/></div><div class='line' id='LC25'><br/></div><div class='line' id='LC26'><span class="cm">/*---------------------------------------*/</span></div><div class='line' id='LC27'><span class="cm">/* Prototypes for disk control functions */</span></div><div class='line' id='LC28'><br/></div><div class='line' id='LC29'><span class="kt">int</span> <span class="n">assign_drives</span> <span class="p">(</span><span class="kt">int</span><span class="p">,</span> <span class="kt">int</span><span class="p">);</span></div><div class='line' id='LC30'><span class="n">DSTATUS</span> <span class="n">disk_initialize</span> <span class="p">(</span><span class="n">BYTE</span><span class="p">);</span></div><div class='line' id='LC31'><span class="n">DSTATUS</span> <span class="n">disk_status</span> <span class="p">(</span><span class="n">BYTE</span><span class="p">);</span></div><div class='line' id='LC32'><span class="n">DRESULT</span> <span class="n">disk_read</span> <span class="p">(</span><span class="n">BYTE</span><span class="p">,</span> <span class="n">BYTE</span><span class="o">*</span><span class="p">,</span> <span class="n">DWORD</span><span class="p">,</span> <span class="n">BYTE</span><span class="p">);</span></div><div class='line' id='LC33'><span class="cp">#if	_READONLY == 0</span></div><div class='line' id='LC34'><span class="n">DRESULT</span> <span class="n">disk_write</span> <span class="p">(</span><span class="n">BYTE</span><span class="p">,</span> <span class="k">const</span> <span class="n">BYTE</span><span class="o">*</span><span class="p">,</span> <span class="n">DWORD</span><span class="p">,</span> <span class="n">BYTE</span><span class="p">);</span></div><div class='line' id='LC35'><span class="cp">#endif</span></div><div class='line' id='LC36'><span class="n">DRESULT</span> <span class="n">disk_ioctl</span> <span class="p">(</span><span class="n">BYTE</span><span class="p">,</span> <span class="n">BYTE</span><span class="p">,</span> <span class="kt">void</span><span class="o">*</span><span class="p">);</span></div><div class='line' id='LC37'><br/></div><div class='line' id='LC38'><br/></div><div class='line' id='LC39'><br/></div><div class='line' id='LC40'><span class="cp">/* Disk Status Bits (DSTATUS) */</span></div><div class='line' id='LC41'><br/></div><div class='line' id='LC42'><span class="cp">#define STA_NOINIT		0x01	</span><span class="cm">/* Drive not initialized */</span><span class="cp"></span></div><div class='line' id='LC43'><span class="cp">#define STA_NODISK		0x02	</span><span class="cm">/* No medium in the drive */</span><span class="cp"></span></div><div class='line' id='LC44'><span class="cp">#define STA_PROTECT		0x04	</span><span class="cm">/* Write protected */</span><span class="cp"></span></div><div class='line' id='LC45'><br/></div><div class='line' id='LC46'><br/></div><div class='line' id='LC47'><span class="cp">/* Command code for disk_ioctrl fucntion */</span></div><div class='line' id='LC48'><br/></div><div class='line' id='LC49'><span class="cp">/* Generic command (defined for FatFs) */</span></div><div class='line' id='LC50'><span class="cp">#define CTRL_SYNC			0	</span><span class="cm">/* Flush disk cache (for write functions) */</span><span class="cp"></span></div><div class='line' id='LC51'><span class="cp">#define GET_SECTOR_COUNT	1	</span><span class="cm">/* Get media size (for only f_mkfs()) */</span><span class="cp"></span></div><div class='line' id='LC52'><span class="cp">#define GET_SECTOR_SIZE		2	</span><span class="cm">/* Get sector size (for multiple sector size (_MAX_SS &gt;= 1024)) */</span><span class="cp"></span></div><div class='line' id='LC53'><span class="cp">#define GET_BLOCK_SIZE		3	</span><span class="cm">/* Get erase block size (for only f_mkfs()) */</span><span class="cp"></span></div><div class='line' id='LC54'><span class="cp">#define CTRL_ERASE_SECTOR	4	</span><span class="cm">/* Force erased a block of sectors (for only _USE_ERASE) */</span><span class="cp"></span></div><div class='line' id='LC55'><br/></div><div class='line' id='LC56'><span class="cp">/* Generic command */</span></div><div class='line' id='LC57'><span class="cp">#define CTRL_POWER			5	</span><span class="cm">/* Get/Set power status */</span><span class="cp"></span></div><div class='line' id='LC58'><span class="cp">#define CTRL_LOCK			6	</span><span class="cm">/* Lock/Unlock media removal */</span><span class="cp"></span></div><div class='line' id='LC59'><span class="cp">#define CTRL_EJECT			7	</span><span class="cm">/* Eject media */</span><span class="cp"></span></div><div class='line' id='LC60'><br/></div><div class='line' id='LC61'><span class="cp">/* MMC/SDC specific ioctl command */</span></div><div class='line' id='LC62'><span class="cp">#define MMC_GET_TYPE		10	</span><span class="cm">/* Get card type */</span><span class="cp"></span></div><div class='line' id='LC63'><span class="cp">#define MMC_GET_CSD			11	</span><span class="cm">/* Get CSD */</span><span class="cp"></span></div><div class='line' id='LC64'><span class="cp">#define MMC_GET_CID			12	</span><span class="cm">/* Get CID */</span><span class="cp"></span></div><div class='line' id='LC65'><span class="cp">#define MMC_GET_OCR			13	</span><span class="cm">/* Get OCR */</span><span class="cp"></span></div><div class='line' id='LC66'><span class="cp">#define MMC_GET_SDSTAT		14	</span><span class="cm">/* Get SD status */</span><span class="cp"></span></div><div class='line' id='LC67'><br/></div><div class='line' id='LC68'><span class="cp">/* ATA/CF specific ioctl command */</span></div><div class='line' id='LC69'><span class="cp">#define ATA_GET_REV			20	</span><span class="cm">/* Get F/W revision */</span><span class="cp"></span></div><div class='line' id='LC70'><span class="cp">#define ATA_GET_MODEL		21	</span><span class="cm">/* Get model name */</span><span class="cp"></span></div><div class='line' id='LC71'><span class="cp">#define ATA_GET_SN			22	</span><span class="cm">/* Get serial number */</span><span class="cp"></span></div><div class='line' id='LC72'><br/></div><div class='line' id='LC73'><span class="cp">/* NAND specific ioctl command */</span></div><div class='line' id='LC74'><span class="cp">#define NAND_FORMAT			30	</span><span class="cm">/* Create physical format */</span><span class="cp"></span></div><div class='line' id='LC75'><br/></div><div class='line' id='LC76'><br/></div><div class='line' id='LC77'><span class="cp">#define _DISKIO</span></div><div class='line' id='LC78'><span class="cp">#endif</span></div><div class='line' id='LC79'><br/></div><div class='line' id='LC80'><br/></div></pre></div>
              
            
          </td>
        </tr>
      </table>
    
  </div>


          </div>
        </div>
      </div>
    </div>
  

  </div>


<div class="frame frame-loading" style="display:none;">
  <img src="https://a248.e.akamai.net/assets.github.com/images/modules/ajax/big_spinner_336699.gif" height="32" width="32">
</div>

    </div>
  
      
    </div>

    <div id="footer" class="clearfix">
      <div class="site">
        
          <div class="sponsor">
            <a href="http://www.rackspace.com" class="logo">
              <img alt="Dedicated Server" height="36" src="https://a248.e.akamai.net/assets.github.com/images/modules/footer/rackspace_logo.png?v2" width="38" />
            </a>
            Powered by the <a href="http://www.rackspace.com ">Dedicated
            Servers</a> and<br/> <a href="http://www.rackspacecloud.com">Cloud
            Computing</a> of Rackspace Hosting<span>&reg;</span>
          </div>
        

        <ul class="links">
          
            <li class="blog"><a href="https://github.com/blog">Blog</a></li>
            <li><a href="https://github.com/about">About</a></li>
            <li><a href="https://github.com/contact">Contact &amp; Support</a></li>
            <li><a href="https://github.com/training">Training</a></li>
            <li><a href="http://jobs.github.com">Job Board</a></li>
            <li><a href="http://shop.github.com">Shop</a></li>
            <li><a href="http://developer.github.com">API</a></li>
            <li><a href="http://status.github.com">Status</a></li>
          
        </ul>
        <ul class="sosueme">
          <li class="main">&copy; 2011 <span id="_rrt" title="0.20417s from fe6.rs.github.com">GitHub</span> Inc. All rights reserved.</li>
          <li><a href="/site/terms">Terms of Service</a></li>
          <li><a href="/site/privacy">Privacy</a></li>
          <li><a href="https://github.com/security">Security</a></li>
        </ul>
      </div>
    </div><!-- /#footer -->

    <script>window._auth_token = "b25738058da11465ca8bba73de0553dc0c0e01e9"</script>
    

<div id="keyboard_shortcuts_pane" class="instapaper_ignore readability-extra" style="display:none">
  <h2>Keyboard Shortcuts <small><a href="#" class="js-see-all-keyboard-shortcuts">(see all)</a></small></h2>

  <div class="columns threecols">
    <div class="column first">
      <h3>Site wide shortcuts</h3>
      <dl class="keyboard-mappings">
        <dt>s</dt>
        <dd>Focus site search</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>?</dt>
        <dd>Bring up this help dialog</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column middle" style='display:none'>
      <h3>Commit list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selected down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selected up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>t</dt>
        <dd>Open tree</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>p</dt>
        <dd>Open parent</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>c <em>or</em> o <em>or</em> enter</dt>
        <dd>Open commit</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>y</dt>
        <dd>Expand URL to its canonical form</dd>
      </dl>
    </div><!-- /.column.first -->

    <div class="column last" style='display:none'>
      <h3>Pull request list</h3>
      <dl class="keyboard-mappings">
        <dt>j</dt>
        <dd>Move selected down</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>k</dt>
        <dd>Move selected up</dd>
      </dl>
      <dl class="keyboard-mappings">
        <dt>o <em>or</em> enter</dt>
        <dd>Open issue</dd>
      </dl>
    </div><!-- /.columns.last -->

  </div><!-- /.columns.equacols -->

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Issues</h3>

    <div class="columns threecols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt>j</dt>
          <dd>Move selected down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>k</dt>
          <dd>Move selected up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>x</dt>
          <dd>Toggle select target</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>o <em>or</em> enter</dt>
          <dd>Open issue</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column middle">
        <dl class="keyboard-mappings">
          <dt>I</dt>
          <dd>Mark selected as read</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>U</dt>
          <dd>Mark selected as unread</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>e</dt>
          <dd>Close selected</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Remove selected from view</dd>
        </dl>
      </div><!-- /.column.middle -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>c</dt>
          <dd>Create issue</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Create label</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>i</dt>
          <dd>Back to inbox</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>u</dt>
          <dd>Back to issues</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>/</dt>
          <dd>Focus issues search</dd>
        </dl>
      </div>
    </div>
  </div>

  <div style='display:none'>
    <div class="rule"></div>

    <h3>Network Graph</h3>
    <div class="columns equacols">
      <div class="column first">
        <dl class="keyboard-mappings">
          <dt><span class="badmono">←</span> <em>or</em> h</dt>
          <dd>Scroll left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">→</span> <em>or</em> l</dt>
          <dd>Scroll right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↑</span> <em>or</em> k</dt>
          <dd>Scroll up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt><span class="badmono">↓</span> <em>or</em> j</dt>
          <dd>Scroll down</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Toggle visibility of head labels</dd>
        </dl>
      </div><!-- /.column.first -->
      <div class="column last">
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">←</span> <em>or</em> shift h</dt>
          <dd>Scroll all the way left</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">→</span> <em>or</em> shift l</dt>
          <dd>Scroll all the way right</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↑</span> <em>or</em> shift k</dt>
          <dd>Scroll all the way up</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>shift <span class="badmono">↓</span> <em>or</em> shift j</dt>
          <dd>Scroll all the way down</dd>
        </dl>
      </div><!-- /.column.last -->
    </div>
  </div>

  <div >
    <div class="rule"></div>
    <div class="columns threecols">
      <div class="column first" >
        <h3>Source Code Browsing</h3>
        <dl class="keyboard-mappings">
          <dt>t</dt>
          <dd>Activates the file finder</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>l</dt>
          <dd>Jump to line</dd>
        </dl>
        <dl class="keyboard-mappings">
          <dt>y</dt>
          <dd>Expand URL to its canonical form</dd>
        </dl>
      </div>
    </div>
  </div>
</div>

    <div id="markdown-help" class="instapaper_ignore readability-extra">
  <h2>Markdown Cheat Sheet</h2>

  <div class="cheatsheet-content">

  <div class="mod">
    <div class="col">
      <h3>Format Text</h3>
      <p>Headers</p>
      <pre>
# This is an &lt;h1&gt; tag
## This is an &lt;h2&gt; tag
###### This is an &lt;h6&gt; tag</pre>
     <p>Text styles</p>
     <pre>
*This text will be italic*
_This will also be italic_
**This text will be bold**
__This will also be bold__

*You **can** combine them*
</pre>
    </div>
    <div class="col">
      <h3>Lists</h3>
      <p>Unordered</p>
      <pre>
* Item 1
* Item 2
  * Item 2a
  * Item 2b</pre>
     <p>Ordered</p>
     <pre>
1. Item 1
2. Item 2
3. Item 3
   * Item 3a
   * Item 3b</pre>
    </div>
    <div class="col">
      <h3>Miscellaneous</h3>
      <p>Images</p>
      <pre>
![GitHub Logo](/images/logo.png)
Format: ![Alt Text](url)
</pre>
     <p>Links</p>
     <pre>
http://github.com - automatic!
[GitHub](http://github.com)</pre>
<p>Blockquotes</p>
     <pre>
As Kanye West said:
> We're living the future so
> the present is our past.
</pre>
    </div>
  </div>
  <div class="rule"></div>

  <h3>Code Examples in Markdown</h3>
  <div class="col">
      <p>Syntax highlighting with <a href="http://github.github.com/github-flavored-markdown/" title="GitHub Flavored Markdown">GFM</a></p>
      <pre>
```javascript
function fancyAlert(arg) {
  if(arg) {
    $.facebox({div:'#foo'})
  }
}
```</pre>
    </div>
    <div class="col">
      <p>Or, indent your code 4 spaces</p>
      <pre>
Here is a Python code example
without syntax highlighting:

    def foo:
      if not bar:
        return true</pre>
    </div>
    <div class="col">
      <p>Inline code for comments</p>
      <pre>
I think you should use an
`&lt;addr&gt;` element here instead.</pre>
    </div>
  </div>

  </div>
</div>
    

    <!--[if IE 8]>
    <script type="text/javascript" charset="utf-8">
      $(document.body).addClass("ie8")
    </script>
    <![endif]-->

    <!--[if IE 7]>
    <script type="text/javascript" charset="utf-8">
      $(document.body).addClass("ie7")
    </script>
    <![endif]-->

    
    
    
    <script type="text/javascript">(function(){var d=document;var e=d.createElement("script");e.async=true;e.src="https://d1ros97qkrwjf5.cloudfront.net/14/eum/rum.js	";e.type="text/javascript";var s=d.getElementsByTagName("script")[0];s.parentNode.insertBefore(e,s);})();NREUMQ.push(["nrf2","beacon-1.newrelic.com","2f94e4d8c2",64799,"dw1bEBZcX1RWRhoEClsAGhcMXEQ=",0.0,200,new Date().getTime()])</script>
  </body>
</html>

