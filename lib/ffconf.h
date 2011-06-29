
    

  

<!DOCTYPE html>
<html>
  <head>
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="chrome=1">
    <script type="text/javascript">var NREUMQ=[];NREUMQ.push(["mark","firstbyte",new Date().getTime()]);</script>
        <title>lib/ffconf.h at master from FitnessMonitor/Fitness-Monitor - GitHub</title>
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

    
  <link rel='canonical' href='/FitnessMonitor/Fitness-Monitor/blob/c00ed1795f90a165e3f518b7aa213d9f5b953757/lib/ffconf.h'>

  <link href="https://github.com/FitnessMonitor/Fitness-Monitor/commits/master.atom" rel="alternate" title="Recent Commits to Fitness-Monitor:master" type="application/atom+xml" />

        <meta name="description" content="Fitness-Monitor - MNSU Sr. Design Project" />
    <script type="text/javascript">
      GitHub.nameWithOwner = GitHub.nameWithOwner || "FitnessMonitor/Fitness-Monitor";
      GitHub.currentRef = 'master';
      GitHub.commitSHA = "c00ed1795f90a165e3f518b7aa213d9f5b953757";
      GitHub.currentPath = 'lib/ffconf.h';
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
        
          
          
            <li><a href="/FitnessMonitor/Fitness-Monitor/blob/charles/lib/ffconf.h" data-name="charles">charles</a></li>
          
        
          
          
            <li><a href="/FitnessMonitor/Fitness-Monitor/blob/dancole/lib/ffconf.h" data-name="dancole">dancole</a></li>
          
        
          
            <li><strong>master &#x2713;</strong></li>
            
          
          
            <li><a href="/FitnessMonitor/Fitness-Monitor/blob/norm/lib/ffconf.h" data-name="norm">norm</a></li>
          
        
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

  

    <div class="breadcrumb" data-path="lib/ffconf.h/">
      <b><a href="/FitnessMonitor/Fitness-Monitor/tree/c00ed1795f90a165e3f518b7aa213d9f5b953757">Fitness-Monitor</a></b> / <a href="/FitnessMonitor/Fitness-Monitor/tree/c00ed1795f90a165e3f518b7aa213d9f5b953757/lib">lib</a> / ffconf.h       <span style="display:none" id="clippy_2808">lib/ffconf.h</span>
      
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="110"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="https://a248.e.akamai.net/assets.github.com/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=clippy_2808&amp;copied=copied!&amp;copyto=copy to clipboard">
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
             FlashVars="id=clippy_2808&amp;copied=copied!&amp;copyto=copy to clipboard"
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      

    </div>

    <div class="frames">
      <div class="frame frame-center" data-path="lib/ffconf.h/" data-canonical-url="/FitnessMonitor/Fitness-Monitor/blob/c00ed1795f90a165e3f518b7aa213d9f5b953757/lib/ffconf.h">
        
          <ul class="big-actions">
            
            <li><a class="file-edit-link minibutton" href="/FitnessMonitor/Fitness-Monitor/edit/__current_ref__/lib/ffconf.h"><span>Edit this file</span></a></li>
          </ul>
        

        <div id="files">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><img alt="Txt" height="16" src="https://a248.e.akamai.net/assets.github.com/images/icons/txt.png" width="16" /></span>
                <span class="mode" title="File Mode">100644</span>
                
                  <span>189 lines (141 sloc)</span>
                
                <span>7.37 kb</span>
              </div>
              <ul class="actions">
                <li><a href="/FitnessMonitor/Fitness-Monitor/raw/master/lib/ffconf.h" id="raw-url">raw</a></li>
                
                  <li><a href="/FitnessMonitor/Fitness-Monitor/blame/master/lib/ffconf.h">blame</a></li>
                
                <li><a href="/FitnessMonitor/Fitness-Monitor/commits/master/lib/ffconf.h">history</a></li>
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
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
</pre>
          </td>
          <td width="100%">
            
              
                <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*---------------------------------------------------------------------------/</span></div><div class='line' id='LC2'><span class="cm">/  FatFs - FAT file system module configuration file  R0.08a (C)ChaN, 2010</span></div><div class='line' id='LC3'><span class="cm">/----------------------------------------------------------------------------/</span></div><div class='line' id='LC4'><span class="cm">/</span></div><div class='line' id='LC5'><span class="cm">/ CAUTION! Do not forget to make clean the project after any changes to</span></div><div class='line' id='LC6'><span class="cm">/ the configuration options.</span></div><div class='line' id='LC7'><span class="cm">/</span></div><div class='line' id='LC8'><span class="cm">/----------------------------------------------------------------------------*/</span></div><div class='line' id='LC9'><span class="cp">#ifndef _FFCONF</span></div><div class='line' id='LC10'><span class="cp">#define _FFCONF 8255	</span><span class="cm">/* Revision ID */</span><span class="cp"></span></div><div class='line' id='LC11'><br/></div><div class='line' id='LC12'><br/></div><div class='line' id='LC13'><span class="cm">/*---------------------------------------------------------------------------/</span></div><div class='line' id='LC14'><span class="cm">/ Function and Buffer Configurations</span></div><div class='line' id='LC15'><span class="cm">/----------------------------------------------------------------------------*/</span></div><div class='line' id='LC16'><br/></div><div class='line' id='LC17'><span class="cp">#define	_FS_TINY	1		</span><span class="cm">/* 0:Normal or 1:Tiny */</span><span class="cp"></span></div><div class='line' id='LC18'><span class="cm">/* When _FS_TINY is set to 1, FatFs uses the sector buffer in the file system</span></div><div class='line' id='LC19'><span class="cm">/  object instead of the sector buffer in the individual file object for file</span></div><div class='line' id='LC20'><span class="cm">/  data transfer. This reduces memory consumption 512 bytes each file object. */</span></div><div class='line' id='LC21'><br/></div><div class='line' id='LC22'><br/></div><div class='line' id='LC23'><span class="cp">#define _FS_READONLY	0	</span><span class="cm">/* 0:Read/Write or 1:Read only */</span><span class="cp"></span></div><div class='line' id='LC24'><span class="cm">/* Setting _FS_READONLY to 1 defines read only configuration. This removes</span></div><div class='line' id='LC25'><span class="cm">/  writing functions, f_write, f_sync, f_unlink, f_mkdir, f_chmod, f_rename,</span></div><div class='line' id='LC26'><span class="cm">/  f_truncate and useless f_getfree. */</span></div><div class='line' id='LC27'><br/></div><div class='line' id='LC28'><br/></div><div class='line' id='LC29'><span class="cp">#define _FS_MINIMIZE	3	</span><span class="cm">/* 0 to 3 */</span><span class="cp"></span></div><div class='line' id='LC30'><span class="cm">/* The _FS_MINIMIZE option defines minimization level to remove some functions.</span></div><div class='line' id='LC31'><span class="cm">/</span></div><div class='line' id='LC32'><span class="cm">/   0: Full function.</span></div><div class='line' id='LC33'><span class="cm">/   1: f_stat, f_getfree, f_unlink, f_mkdir, f_chmod, f_truncate and f_rename</span></div><div class='line' id='LC34'><span class="cm">/      are removed.</span></div><div class='line' id='LC35'><span class="cm">/   2: f_opendir and f_readdir are removed in addition to 1.</span></div><div class='line' id='LC36'><span class="cm">/   3: f_lseek is removed in addition to 2. */</span></div><div class='line' id='LC37'><br/></div><div class='line' id='LC38'><br/></div><div class='line' id='LC39'><span class="cp">#define	_USE_STRFUNC	0	</span><span class="cm">/* 0:Disable or 1/2:Enable */</span><span class="cp"></span></div><div class='line' id='LC40'><span class="cp">/* To enable string functions, set _USE_STRFUNC to 1 or 2. */</span></div><div class='line' id='LC41'><br/></div><div class='line' id='LC42'><br/></div><div class='line' id='LC43'><span class="cp">#define	_USE_MKFS	0		</span><span class="cm">/* 0:Disable or 1:Enable */</span><span class="cp"></span></div><div class='line' id='LC44'><span class="cp">/* To enable f_mkfs function, set _USE_MKFS to 1 and set _FS_READONLY to 0 */</span></div><div class='line' id='LC45'><br/></div><div class='line' id='LC46'><br/></div><div class='line' id='LC47'><span class="cp">#define	_USE_FORWARD	0	</span><span class="cm">/* 0:Disable or 1:Enable */</span><span class="cp"></span></div><div class='line' id='LC48'><span class="cp">/* To enable f_forward function, set _USE_FORWARD to 1 and set _FS_TINY to 1. */</span></div><div class='line' id='LC49'><br/></div><div class='line' id='LC50'><br/></div><div class='line' id='LC51'><span class="cp">#define	_USE_FASTSEEK	0	</span><span class="cm">/* 0:Disable or 1:Enable */</span><span class="cp"></span></div><div class='line' id='LC52'><span class="cm">/* To enable fast seek feature, set _USE_FASTSEEK to 1. */</span></div><div class='line' id='LC53'><br/></div><div class='line' id='LC54'><br/></div><div class='line' id='LC55'><br/></div><div class='line' id='LC56'><span class="cm">/*---------------------------------------------------------------------------/</span></div><div class='line' id='LC57'><span class="cm">/ Locale and Namespace Configurations</span></div><div class='line' id='LC58'><span class="cm">/----------------------------------------------------------------------------*/</span></div><div class='line' id='LC59'><br/></div><div class='line' id='LC60'><span class="cp">#define _CODE_PAGE	437</span></div><div class='line' id='LC61'><span class="cm">/* The _CODE_PAGE specifies the OEM code page to be used on the target system.</span></div><div class='line' id='LC62'><span class="cm">/  Incorrect setting of the code page can cause a file open failure.</span></div><div class='line' id='LC63'><span class="cm">/</span></div><div class='line' id='LC64'><span class="cm">/   932  - Japanese Shift-JIS (DBCS, OEM, Windows)</span></div><div class='line' id='LC65'><span class="cm">/   936  - Simplified Chinese GBK (DBCS, OEM, Windows)</span></div><div class='line' id='LC66'><span class="cm">/   949  - Korean (DBCS, OEM, Windows)</span></div><div class='line' id='LC67'><span class="cm">/   950  - Traditional Chinese Big5 (DBCS, OEM, Windows)</span></div><div class='line' id='LC68'><span class="cm">/   1250 - Central Europe (Windows)</span></div><div class='line' id='LC69'><span class="cm">/   1251 - Cyrillic (Windows)</span></div><div class='line' id='LC70'><span class="cm">/   1252 - Latin 1 (Windows)</span></div><div class='line' id='LC71'><span class="cm">/   1253 - Greek (Windows)</span></div><div class='line' id='LC72'><span class="cm">/   1254 - Turkish (Windows)</span></div><div class='line' id='LC73'><span class="cm">/   1255 - Hebrew (Windows)</span></div><div class='line' id='LC74'><span class="cm">/   1256 - Arabic (Windows)</span></div><div class='line' id='LC75'><span class="cm">/   1257 - Baltic (Windows)</span></div><div class='line' id='LC76'><span class="cm">/   1258 - Vietnam (OEM, Windows)</span></div><div class='line' id='LC77'><span class="cm">/   437  - U.S. (OEM)</span></div><div class='line' id='LC78'><span class="cm">/   720  - Arabic (OEM)</span></div><div class='line' id='LC79'><span class="cm">/   737  - Greek (OEM)</span></div><div class='line' id='LC80'><span class="cm">/   775  - Baltic (OEM)</span></div><div class='line' id='LC81'><span class="cm">/   850  - Multilingual Latin 1 (OEM)</span></div><div class='line' id='LC82'><span class="cm">/   858  - Multilingual Latin 1 + Euro (OEM)</span></div><div class='line' id='LC83'><span class="cm">/   852  - Latin 2 (OEM)</span></div><div class='line' id='LC84'><span class="cm">/   855  - Cyrillic (OEM)</span></div><div class='line' id='LC85'><span class="cm">/   866  - Russian (OEM)</span></div><div class='line' id='LC86'><span class="cm">/   857  - Turkish (OEM)</span></div><div class='line' id='LC87'><span class="cm">/   862  - Hebrew (OEM)</span></div><div class='line' id='LC88'><span class="cm">/   874  - Thai (OEM, Windows)</span></div><div class='line' id='LC89'><span class="cm">/	1    - ASCII only (Valid for non LFN cfg.)</span></div><div class='line' id='LC90'><span class="cm">*/</span></div><div class='line' id='LC91'><br/></div><div class='line' id='LC92'><br/></div><div class='line' id='LC93'><span class="cp">#define	_USE_LFN	0		</span><span class="cm">/* 0 to 3 */</span><span class="cp"></span></div><div class='line' id='LC94'><span class="cp">#define	_MAX_LFN	255		</span><span class="cm">/* Maximum LFN length to handle (12 to 255) */</span><span class="cp"></span></div><div class='line' id='LC95'><span class="cm">/* The _USE_LFN option switches the LFN support.</span></div><div class='line' id='LC96'><span class="cm">/</span></div><div class='line' id='LC97'><span class="cm">/   0: Disable LFN feature. _MAX_LFN and _LFN_UNICODE have no effect.</span></div><div class='line' id='LC98'><span class="cm">/   1: Enable LFN with static working buffer on the BSS. Always NOT reentrant.</span></div><div class='line' id='LC99'><span class="cm">/   2: Enable LFN with dynamic working buffer on the STACK.</span></div><div class='line' id='LC100'><span class="cm">/   3: Enable LFN with dynamic working buffer on the HEAP.</span></div><div class='line' id='LC101'><span class="cm">/</span></div><div class='line' id='LC102'><span class="cm">/  The LFN working buffer occupies (_MAX_LFN + 1) * 2 bytes. To enable LFN,</span></div><div class='line' id='LC103'><span class="cm">/  Unicode handling functions ff_convert() and ff_wtoupper() must be added</span></div><div class='line' id='LC104'><span class="cm">/  to the project. When enable to use heap, memory control functions</span></div><div class='line' id='LC105'><span class="cm">/  ff_memalloc() and ff_memfree() must be added to the project. */</span></div><div class='line' id='LC106'><br/></div><div class='line' id='LC107'><br/></div><div class='line' id='LC108'><span class="cp">#define	_LFN_UNICODE	0	</span><span class="cm">/* 0:ANSI/OEM or 1:Unicode */</span><span class="cp"></span></div><div class='line' id='LC109'><span class="cm">/* To switch the character code set on FatFs API to Unicode,</span></div><div class='line' id='LC110'><span class="cm">/  enable LFN feature and set _LFN_UNICODE to 1. */</span></div><div class='line' id='LC111'><br/></div><div class='line' id='LC112'><br/></div><div class='line' id='LC113'><span class="cp">#define _FS_RPATH	0		</span><span class="cm">/* 0 to 2 */</span><span class="cp"></span></div><div class='line' id='LC114'><span class="cm">/* The _FS_RPATH option configures relative path feature.</span></div><div class='line' id='LC115'><span class="cm">/</span></div><div class='line' id='LC116'><span class="cm">/   0: Disable relative path feature and remove related functions.</span></div><div class='line' id='LC117'><span class="cm">/   1: Enable relative path. f_chdrive() and f_chdir() are available.</span></div><div class='line' id='LC118'><span class="cm">/   2: f_getcwd() is available in addition to 1.</span></div><div class='line' id='LC119'><span class="cm">/</span></div><div class='line' id='LC120'><span class="cm">/  Note that output of the f_readdir fnction is affected by this option. */</span></div><div class='line' id='LC121'><br/></div><div class='line' id='LC122'><br/></div><div class='line' id='LC123'><br/></div><div class='line' id='LC124'><span class="cm">/*---------------------------------------------------------------------------/</span></div><div class='line' id='LC125'><span class="cm">/ Physical Drive Configurations</span></div><div class='line' id='LC126'><span class="cm">/----------------------------------------------------------------------------*/</span></div><div class='line' id='LC127'><br/></div><div class='line' id='LC128'><span class="cp">#define _VOLUMES	1</span></div><div class='line' id='LC129'><span class="cp">/* Number of volumes (logical drives) to be used. */</span></div><div class='line' id='LC130'><br/></div><div class='line' id='LC131'><br/></div><div class='line' id='LC132'><span class="cp">#define	_MAX_SS		512		</span><span class="cm">/* 512, 1024, 2048 or 4096 */</span><span class="cp"></span></div><div class='line' id='LC133'><span class="cm">/* Maximum sector size to be handled.</span></div><div class='line' id='LC134'><span class="cm">/  Always set 512 for memory card and hard disk but a larger value may be</span></div><div class='line' id='LC135'><span class="cm">/  required for floppy disk (512/1024) and optical disk (512/2048).</span></div><div class='line' id='LC136'><span class="cm">/  When _MAX_SS is larger than 512, GET_SECTOR_SIZE command must be implememted</span></div><div class='line' id='LC137'><span class="cm">/  to the disk_ioctl function. */</span></div><div class='line' id='LC138'><br/></div><div class='line' id='LC139'><br/></div><div class='line' id='LC140'><span class="cp">#define	_MULTI_PARTITION	0	</span><span class="cm">/* 0:Single partition or 1:Multiple partition */</span><span class="cp"></span></div><div class='line' id='LC141'><span class="cm">/* When set to 0, each volume is bound to the same physical drive number and</span></div><div class='line' id='LC142'><span class="cm">/ it can mount only first primaly partition. When it is set to 1, each volume</span></div><div class='line' id='LC143'><span class="cm">/ is tied to the partitions listed in VolToPart[]. */</span></div><div class='line' id='LC144'><br/></div><div class='line' id='LC145'><br/></div><div class='line' id='LC146'><span class="cp">#define	_USE_ERASE	0	</span><span class="cm">/* 0:Disable or 1:Enable */</span><span class="cp"></span></div><div class='line' id='LC147'><span class="cm">/* To enable sector erase feature, set _USE_ERASE to 1. */</span></div><div class='line' id='LC148'><br/></div><div class='line' id='LC149'><br/></div><div class='line' id='LC150'><br/></div><div class='line' id='LC151'><span class="cm">/*---------------------------------------------------------------------------/</span></div><div class='line' id='LC152'><span class="cm">/ System Configurations</span></div><div class='line' id='LC153'><span class="cm">/----------------------------------------------------------------------------*/</span></div><div class='line' id='LC154'><br/></div><div class='line' id='LC155'><span class="cp">#define _WORD_ACCESS	0	</span><span class="cm">/* 0 or 1 */</span><span class="cp"></span></div><div class='line' id='LC156'><span class="cm">/* Set 0 first and it is always compatible with all platforms. The _WORD_ACCESS</span></div><div class='line' id='LC157'><span class="cm">/  option defines which access method is used to the word data on the FAT volume.</span></div><div class='line' id='LC158'><span class="cm">/</span></div><div class='line' id='LC159'><span class="cm">/   0: Byte-by-byte access.</span></div><div class='line' id='LC160'><span class="cm">/   1: Word access. Do not choose this unless following condition is met.</span></div><div class='line' id='LC161'><span class="cm">/</span></div><div class='line' id='LC162'><span class="cm">/  When the byte order on the memory is big-endian or address miss-aligned word</span></div><div class='line' id='LC163'><span class="cm">/  access results incorrect behavior, the _WORD_ACCESS must be set to 0.</span></div><div class='line' id='LC164'><span class="cm">/  If it is not the case, the value can also be set to 1 to improve the</span></div><div class='line' id='LC165'><span class="cm">/  performance and code size. */</span></div><div class='line' id='LC166'><br/></div><div class='line' id='LC167'><br/></div><div class='line' id='LC168'><span class="cp">/* Include a header file here to define sync object types on the O/S */</span></div><div class='line' id='LC169'><span class="cp">/* #include &lt;windows.h&gt;, &lt;ucos_ii.h.h&gt;, &lt;semphr.h&gt; or ohters. */</span></div><div class='line' id='LC170'><br/></div><div class='line' id='LC171'><span class="cp">#define _FS_REENTRANT	0		</span><span class="cm">/* 0:Disable or 1:Enable */</span><span class="cp"></span></div><div class='line' id='LC172'><span class="cp">#define _FS_TIMEOUT		1000	</span><span class="cm">/* Timeout period in unit of time ticks */</span><span class="cp"></span></div><div class='line' id='LC173'><span class="cp">#define	_SYNC_t			HANDLE	</span><span class="cm">/* O/S dependent type of sync object. e.g. HANDLE, OS_EVENT*, ID and etc.. */</span><span class="cp"></span></div><div class='line' id='LC174'><br/></div><div class='line' id='LC175'><span class="cm">/* The _FS_REENTRANT option switches the reentrancy of the FatFs module.</span></div><div class='line' id='LC176'><span class="cm">/</span></div><div class='line' id='LC177'><span class="cm">/   0: Disable reentrancy. _SYNC_t and _FS_TIMEOUT have no effect.</span></div><div class='line' id='LC178'><span class="cm">/   1: Enable reentrancy. Also user provided synchronization handlers,</span></div><div class='line' id='LC179'><span class="cm">/      ff_req_grant, ff_rel_grant, ff_del_syncobj and ff_cre_syncobj</span></div><div class='line' id='LC180'><span class="cm">/      function must be added to the project. */</span></div><div class='line' id='LC181'><br/></div><div class='line' id='LC182'><br/></div><div class='line' id='LC183'><span class="cp">#define	_FS_SHARE	0	</span><span class="cm">/* 0:Disable or &gt;=1:Enable */</span><span class="cp"></span></div><div class='line' id='LC184'><span class="cm">/* To enable file shareing feature, set _FS_SHARE to 1 or greater. The value</span></div><div class='line' id='LC185'><span class="cm">   defines how many files can be opened simultaneously. */</span></div><div class='line' id='LC186'><br/></div><div class='line' id='LC187'><br/></div><div class='line' id='LC188'><span class="cp">#endif </span><span class="cm">/* _FFCONFIG */</span><span class="cp"></span></div><div class='line' id='LC189'><br/></div></pre></div>
              
            
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
          <li class="main">&copy; 2011 <span id="_rrt" title="0.07578s from fe2.rs.github.com">GitHub</span> Inc. All rights reserved.</li>
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

    
    
    
    <script type="text/javascript">(function(){var d=document;var e=d.createElement("script");e.async=true;e.src="https://d1ros97qkrwjf5.cloudfront.net/14/eum/rum.js	";e.type="text/javascript";var s=d.getElementsByTagName("script")[0];s.parentNode.insertBefore(e,s);})();NREUMQ.push(["nrf2","beacon-1.newrelic.com","2f94e4d8c2",64799,"dw1bEBZcX1RWRhoEClsAGhcMXEQ=",0.0,74,new Date().getTime()])</script>
  </body>
</html>

