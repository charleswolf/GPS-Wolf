
    

  

<!DOCTYPE html>
<html>
  <head>
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="chrome=1">
    <script type="text/javascript">var NREUMQ=[];NREUMQ.push(["mark","firstbyte",new Date().getTime()]);</script>
        <title>lib/ff.h at master from FitnessMonitor/Fitness-Monitor - GitHub</title>
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

    
  <link rel='canonical' href='/FitnessMonitor/Fitness-Monitor/blob/c00ed1795f90a165e3f518b7aa213d9f5b953757/lib/ff.h'>

  <link href="https://github.com/FitnessMonitor/Fitness-Monitor/commits/master.atom" rel="alternate" title="Recent Commits to Fitness-Monitor:master" type="application/atom+xml" />

        <meta name="description" content="Fitness-Monitor - MNSU Sr. Design Project" />
    <script type="text/javascript">
      GitHub.nameWithOwner = GitHub.nameWithOwner || "FitnessMonitor/Fitness-Monitor";
      GitHub.currentRef = 'master';
      GitHub.commitSHA = "c00ed1795f90a165e3f518b7aa213d9f5b953757";
      GitHub.currentPath = 'lib/ff.h';
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
        
          
          
            <li><a href="/FitnessMonitor/Fitness-Monitor/blob/charles/lib/ff.h" data-name="charles">charles</a></li>
          
        
          
          
            <li><a href="/FitnessMonitor/Fitness-Monitor/blob/dancole/lib/ff.h" data-name="dancole">dancole</a></li>
          
        
          
            <li><strong>master &#x2713;</strong></li>
            
          
          
            <li><a href="/FitnessMonitor/Fitness-Monitor/blob/norm/lib/ff.h" data-name="norm">norm</a></li>
          
        
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

  

    <div class="breadcrumb" data-path="lib/ff.h/">
      <b><a href="/FitnessMonitor/Fitness-Monitor/tree/c00ed1795f90a165e3f518b7aa213d9f5b953757">Fitness-Monitor</a></b> / <a href="/FitnessMonitor/Fitness-Monitor/tree/c00ed1795f90a165e3f518b7aa213d9f5b953757/lib">lib</a> / ff.h       <span style="display:none" id="clippy_2632">lib/ff.h</span>
      
      <object classid="clsid:d27cdb6e-ae6d-11cf-96b8-444553540000"
              width="110"
              height="14"
              class="clippy"
              id="clippy" >
      <param name="movie" value="https://a248.e.akamai.net/assets.github.com/flash/clippy.swf?v5"/>
      <param name="allowScriptAccess" value="always" />
      <param name="quality" value="high" />
      <param name="scale" value="noscale" />
      <param NAME="FlashVars" value="id=clippy_2632&amp;copied=copied!&amp;copyto=copy to clipboard">
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
             FlashVars="id=clippy_2632&amp;copied=copied!&amp;copyto=copy to clipboard"
             bgcolor="#FFFFFF"
             wmode="opaque"
      />
      </object>
      

    </div>

    <div class="frames">
      <div class="frame frame-center" data-path="lib/ff.h/" data-canonical-url="/FitnessMonitor/Fitness-Monitor/blob/c00ed1795f90a165e3f518b7aa213d9f5b953757/lib/ff.h">
        
          <ul class="big-actions">
            
            <li><a class="file-edit-link minibutton" href="/FitnessMonitor/Fitness-Monitor/edit/__current_ref__/lib/ff.h"><span>Edit this file</span></a></li>
          </ul>
        

        <div id="files">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><img alt="Txt" height="16" src="https://a248.e.akamai.net/assets.github.com/images/icons/txt.png" width="16" /></span>
                <span class="mode" title="File Mode">100644</span>
                
                  <span>542 lines (438 sloc)</span>
                
                <span>29.232 kb</span>
              </div>
              <ul class="actions">
                <li><a href="/FitnessMonitor/Fitness-Monitor/raw/master/lib/ff.h" id="raw-url">raw</a></li>
                
                  <li><a href="/FitnessMonitor/Fitness-Monitor/blame/master/lib/ff.h">blame</a></li>
                
                <li><a href="/FitnessMonitor/Fitness-Monitor/commits/master/lib/ff.h">history</a></li>
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
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>
<span id="L288" rel="#L288">288</span>
<span id="L289" rel="#L289">289</span>
<span id="L290" rel="#L290">290</span>
<span id="L291" rel="#L291">291</span>
<span id="L292" rel="#L292">292</span>
<span id="L293" rel="#L293">293</span>
<span id="L294" rel="#L294">294</span>
<span id="L295" rel="#L295">295</span>
<span id="L296" rel="#L296">296</span>
<span id="L297" rel="#L297">297</span>
<span id="L298" rel="#L298">298</span>
<span id="L299" rel="#L299">299</span>
<span id="L300" rel="#L300">300</span>
<span id="L301" rel="#L301">301</span>
<span id="L302" rel="#L302">302</span>
<span id="L303" rel="#L303">303</span>
<span id="L304" rel="#L304">304</span>
<span id="L305" rel="#L305">305</span>
<span id="L306" rel="#L306">306</span>
<span id="L307" rel="#L307">307</span>
<span id="L308" rel="#L308">308</span>
<span id="L309" rel="#L309">309</span>
<span id="L310" rel="#L310">310</span>
<span id="L311" rel="#L311">311</span>
<span id="L312" rel="#L312">312</span>
<span id="L313" rel="#L313">313</span>
<span id="L314" rel="#L314">314</span>
<span id="L315" rel="#L315">315</span>
<span id="L316" rel="#L316">316</span>
<span id="L317" rel="#L317">317</span>
<span id="L318" rel="#L318">318</span>
<span id="L319" rel="#L319">319</span>
<span id="L320" rel="#L320">320</span>
<span id="L321" rel="#L321">321</span>
<span id="L322" rel="#L322">322</span>
<span id="L323" rel="#L323">323</span>
<span id="L324" rel="#L324">324</span>
<span id="L325" rel="#L325">325</span>
<span id="L326" rel="#L326">326</span>
<span id="L327" rel="#L327">327</span>
<span id="L328" rel="#L328">328</span>
<span id="L329" rel="#L329">329</span>
<span id="L330" rel="#L330">330</span>
<span id="L331" rel="#L331">331</span>
<span id="L332" rel="#L332">332</span>
<span id="L333" rel="#L333">333</span>
<span id="L334" rel="#L334">334</span>
<span id="L335" rel="#L335">335</span>
<span id="L336" rel="#L336">336</span>
<span id="L337" rel="#L337">337</span>
<span id="L338" rel="#L338">338</span>
<span id="L339" rel="#L339">339</span>
<span id="L340" rel="#L340">340</span>
<span id="L341" rel="#L341">341</span>
<span id="L342" rel="#L342">342</span>
<span id="L343" rel="#L343">343</span>
<span id="L344" rel="#L344">344</span>
<span id="L345" rel="#L345">345</span>
<span id="L346" rel="#L346">346</span>
<span id="L347" rel="#L347">347</span>
<span id="L348" rel="#L348">348</span>
<span id="L349" rel="#L349">349</span>
<span id="L350" rel="#L350">350</span>
<span id="L351" rel="#L351">351</span>
<span id="L352" rel="#L352">352</span>
<span id="L353" rel="#L353">353</span>
<span id="L354" rel="#L354">354</span>
<span id="L355" rel="#L355">355</span>
<span id="L356" rel="#L356">356</span>
<span id="L357" rel="#L357">357</span>
<span id="L358" rel="#L358">358</span>
<span id="L359" rel="#L359">359</span>
<span id="L360" rel="#L360">360</span>
<span id="L361" rel="#L361">361</span>
<span id="L362" rel="#L362">362</span>
<span id="L363" rel="#L363">363</span>
<span id="L364" rel="#L364">364</span>
<span id="L365" rel="#L365">365</span>
<span id="L366" rel="#L366">366</span>
<span id="L367" rel="#L367">367</span>
<span id="L368" rel="#L368">368</span>
<span id="L369" rel="#L369">369</span>
<span id="L370" rel="#L370">370</span>
<span id="L371" rel="#L371">371</span>
<span id="L372" rel="#L372">372</span>
<span id="L373" rel="#L373">373</span>
<span id="L374" rel="#L374">374</span>
<span id="L375" rel="#L375">375</span>
<span id="L376" rel="#L376">376</span>
<span id="L377" rel="#L377">377</span>
<span id="L378" rel="#L378">378</span>
<span id="L379" rel="#L379">379</span>
<span id="L380" rel="#L380">380</span>
<span id="L381" rel="#L381">381</span>
<span id="L382" rel="#L382">382</span>
<span id="L383" rel="#L383">383</span>
<span id="L384" rel="#L384">384</span>
<span id="L385" rel="#L385">385</span>
<span id="L386" rel="#L386">386</span>
<span id="L387" rel="#L387">387</span>
<span id="L388" rel="#L388">388</span>
<span id="L389" rel="#L389">389</span>
<span id="L390" rel="#L390">390</span>
<span id="L391" rel="#L391">391</span>
<span id="L392" rel="#L392">392</span>
<span id="L393" rel="#L393">393</span>
<span id="L394" rel="#L394">394</span>
<span id="L395" rel="#L395">395</span>
<span id="L396" rel="#L396">396</span>
<span id="L397" rel="#L397">397</span>
<span id="L398" rel="#L398">398</span>
<span id="L399" rel="#L399">399</span>
<span id="L400" rel="#L400">400</span>
<span id="L401" rel="#L401">401</span>
<span id="L402" rel="#L402">402</span>
<span id="L403" rel="#L403">403</span>
<span id="L404" rel="#L404">404</span>
<span id="L405" rel="#L405">405</span>
<span id="L406" rel="#L406">406</span>
<span id="L407" rel="#L407">407</span>
<span id="L408" rel="#L408">408</span>
<span id="L409" rel="#L409">409</span>
<span id="L410" rel="#L410">410</span>
<span id="L411" rel="#L411">411</span>
<span id="L412" rel="#L412">412</span>
<span id="L413" rel="#L413">413</span>
<span id="L414" rel="#L414">414</span>
<span id="L415" rel="#L415">415</span>
<span id="L416" rel="#L416">416</span>
<span id="L417" rel="#L417">417</span>
<span id="L418" rel="#L418">418</span>
<span id="L419" rel="#L419">419</span>
<span id="L420" rel="#L420">420</span>
<span id="L421" rel="#L421">421</span>
<span id="L422" rel="#L422">422</span>
<span id="L423" rel="#L423">423</span>
<span id="L424" rel="#L424">424</span>
<span id="L425" rel="#L425">425</span>
<span id="L426" rel="#L426">426</span>
<span id="L427" rel="#L427">427</span>
<span id="L428" rel="#L428">428</span>
<span id="L429" rel="#L429">429</span>
<span id="L430" rel="#L430">430</span>
<span id="L431" rel="#L431">431</span>
<span id="L432" rel="#L432">432</span>
<span id="L433" rel="#L433">433</span>
<span id="L434" rel="#L434">434</span>
<span id="L435" rel="#L435">435</span>
<span id="L436" rel="#L436">436</span>
<span id="L437" rel="#L437">437</span>
<span id="L438" rel="#L438">438</span>
<span id="L439" rel="#L439">439</span>
<span id="L440" rel="#L440">440</span>
<span id="L441" rel="#L441">441</span>
<span id="L442" rel="#L442">442</span>
<span id="L443" rel="#L443">443</span>
<span id="L444" rel="#L444">444</span>
<span id="L445" rel="#L445">445</span>
<span id="L446" rel="#L446">446</span>
<span id="L447" rel="#L447">447</span>
<span id="L448" rel="#L448">448</span>
<span id="L449" rel="#L449">449</span>
<span id="L450" rel="#L450">450</span>
<span id="L451" rel="#L451">451</span>
<span id="L452" rel="#L452">452</span>
<span id="L453" rel="#L453">453</span>
<span id="L454" rel="#L454">454</span>
<span id="L455" rel="#L455">455</span>
<span id="L456" rel="#L456">456</span>
<span id="L457" rel="#L457">457</span>
<span id="L458" rel="#L458">458</span>
<span id="L459" rel="#L459">459</span>
<span id="L460" rel="#L460">460</span>
<span id="L461" rel="#L461">461</span>
<span id="L462" rel="#L462">462</span>
<span id="L463" rel="#L463">463</span>
<span id="L464" rel="#L464">464</span>
<span id="L465" rel="#L465">465</span>
<span id="L466" rel="#L466">466</span>
<span id="L467" rel="#L467">467</span>
<span id="L468" rel="#L468">468</span>
<span id="L469" rel="#L469">469</span>
<span id="L470" rel="#L470">470</span>
<span id="L471" rel="#L471">471</span>
<span id="L472" rel="#L472">472</span>
<span id="L473" rel="#L473">473</span>
<span id="L474" rel="#L474">474</span>
<span id="L475" rel="#L475">475</span>
<span id="L476" rel="#L476">476</span>
<span id="L477" rel="#L477">477</span>
<span id="L478" rel="#L478">478</span>
<span id="L479" rel="#L479">479</span>
<span id="L480" rel="#L480">480</span>
<span id="L481" rel="#L481">481</span>
<span id="L482" rel="#L482">482</span>
<span id="L483" rel="#L483">483</span>
<span id="L484" rel="#L484">484</span>
<span id="L485" rel="#L485">485</span>
<span id="L486" rel="#L486">486</span>
<span id="L487" rel="#L487">487</span>
<span id="L488" rel="#L488">488</span>
<span id="L489" rel="#L489">489</span>
<span id="L490" rel="#L490">490</span>
<span id="L491" rel="#L491">491</span>
<span id="L492" rel="#L492">492</span>
<span id="L493" rel="#L493">493</span>
<span id="L494" rel="#L494">494</span>
<span id="L495" rel="#L495">495</span>
<span id="L496" rel="#L496">496</span>
<span id="L497" rel="#L497">497</span>
<span id="L498" rel="#L498">498</span>
<span id="L499" rel="#L499">499</span>
<span id="L500" rel="#L500">500</span>
<span id="L501" rel="#L501">501</span>
<span id="L502" rel="#L502">502</span>
<span id="L503" rel="#L503">503</span>
<span id="L504" rel="#L504">504</span>
<span id="L505" rel="#L505">505</span>
<span id="L506" rel="#L506">506</span>
<span id="L507" rel="#L507">507</span>
<span id="L508" rel="#L508">508</span>
<span id="L509" rel="#L509">509</span>
<span id="L510" rel="#L510">510</span>
<span id="L511" rel="#L511">511</span>
<span id="L512" rel="#L512">512</span>
<span id="L513" rel="#L513">513</span>
<span id="L514" rel="#L514">514</span>
<span id="L515" rel="#L515">515</span>
<span id="L516" rel="#L516">516</span>
<span id="L517" rel="#L517">517</span>
<span id="L518" rel="#L518">518</span>
<span id="L519" rel="#L519">519</span>
<span id="L520" rel="#L520">520</span>
<span id="L521" rel="#L521">521</span>
<span id="L522" rel="#L522">522</span>
<span id="L523" rel="#L523">523</span>
<span id="L524" rel="#L524">524</span>
<span id="L525" rel="#L525">525</span>
<span id="L526" rel="#L526">526</span>
<span id="L527" rel="#L527">527</span>
<span id="L528" rel="#L528">528</span>
<span id="L529" rel="#L529">529</span>
<span id="L530" rel="#L530">530</span>
<span id="L531" rel="#L531">531</span>
<span id="L532" rel="#L532">532</span>
<span id="L533" rel="#L533">533</span>
<span id="L534" rel="#L534">534</span>
<span id="L535" rel="#L535">535</span>
<span id="L536" rel="#L536">536</span>
<span id="L537" rel="#L537">537</span>
<span id="L538" rel="#L538">538</span>
<span id="L539" rel="#L539">539</span>
<span id="L540" rel="#L540">540</span>
<span id="L541" rel="#L541">541</span>
<span id="L542" rel="#L542">542</span>
</pre>
          </td>
          <td width="100%">
            
              
                <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*---------------------------------------------------------------------------/</span></div><div class='line' id='LC2'><span class="cm">/  FatFs - FAT file system module include file  R0.08a    (C)ChaN, 2010</span></div><div class='line' id='LC3'><span class="cm">/----------------------------------------------------------------------------/</span></div><div class='line' id='LC4'><span class="cm">/ FatFs module is a generic FAT file system module for small embedded systems.</span></div><div class='line' id='LC5'><span class="cm">/ This is a free software that opened for education, research and commercial</span></div><div class='line' id='LC6'><span class="cm">/ developments under license policy of following trems.</span></div><div class='line' id='LC7'><span class="cm">/</span></div><div class='line' id='LC8'><span class="cm">/  Copyright (C) 2010, ChaN, all right reserved.</span></div><div class='line' id='LC9'><span class="cm">/</span></div><div class='line' id='LC10'><span class="cm">/ * The FatFs module is a free software and there is NO WARRANTY.</span></div><div class='line' id='LC11'><span class="cm">/ * No restriction on use. You can use, modify and redistribute it for</span></div><div class='line' id='LC12'><span class="cm">/   personal, non-profit or commercial product UNDER YOUR RESPONSIBILITY.</span></div><div class='line' id='LC13'><span class="cm">/ * Redistributions of source code must retain the above copyright notice.</span></div><div class='line' id='LC14'><span class="cm">/</span></div><div class='line' id='LC15'><span class="cm">/----------------------------------------------------------------------------*/</span></div><div class='line' id='LC16'><br/></div><div class='line' id='LC17'><span class="cp">#ifndef _FATFS</span></div><div class='line' id='LC18'><span class="cp">#define _FATFS	8255	</span><span class="cm">/* Revision ID */</span><span class="cp"></span></div><div class='line' id='LC19'><br/></div><div class='line' id='LC20'><span class="cp">#ifdef __cplusplus</span></div><div class='line' id='LC21'><span class="k">extern</span> <span class="s">&quot;C&quot;</span> <span class="p">{</span></div><div class='line' id='LC22'><span class="cp">#endif</span></div><div class='line' id='LC23'><br/></div><div class='line' id='LC24'><span class="cp">#include &quot;integer.h&quot;	</span><span class="cm">/* Basic integer types */</span><span class="cp"></span></div><div class='line' id='LC25'><span class="cp">#include &quot;ffconf.h&quot;		</span><span class="cm">/* FatFs configuration options */</span><span class="cp"></span></div><div class='line' id='LC26'><br/></div><div class='line' id='LC27'><span class="cp">#if _FATFS != _FFCONF</span></div><div class='line' id='LC28'><span class="cp">#error Wrong configuration file (ffconf.h).</span></div><div class='line' id='LC29'><span class="cp">#endif</span></div><div class='line' id='LC30'><br/></div><div class='line' id='LC31'><br/></div><div class='line' id='LC32'><span class="cp">/* DBCS code ranges and SBCS extend char conversion table */</span></div><div class='line' id='LC33'><br/></div><div class='line' id='LC34'><span class="cp">#if _CODE_PAGE == 932	</span><span class="cm">/* Japanese Shift-JIS */</span><span class="cp"></span></div><div class='line' id='LC35'><span class="cp">#define _DF1S	0x81	</span><span class="cm">/* DBC 1st byte range 1 start */</span><span class="cp"></span></div><div class='line' id='LC36'><span class="cp">#define _DF1E	0x9F	</span><span class="cm">/* DBC 1st byte range 1 end */</span><span class="cp"></span></div><div class='line' id='LC37'><span class="cp">#define _DF2S	0xE0	</span><span class="cm">/* DBC 1st byte range 2 start */</span><span class="cp"></span></div><div class='line' id='LC38'><span class="cp">#define _DF2E	0xFC	</span><span class="cm">/* DBC 1st byte range 2 end */</span><span class="cp"></span></div><div class='line' id='LC39'><span class="cp">#define _DS1S	0x40	</span><span class="cm">/* DBC 2nd byte range 1 start */</span><span class="cp"></span></div><div class='line' id='LC40'><span class="cp">#define _DS1E	0x7E	</span><span class="cm">/* DBC 2nd byte range 1 end */</span><span class="cp"></span></div><div class='line' id='LC41'><span class="cp">#define _DS2S	0x80	</span><span class="cm">/* DBC 2nd byte range 2 start */</span><span class="cp"></span></div><div class='line' id='LC42'><span class="cp">#define _DS2E	0xFC	</span><span class="cm">/* DBC 2nd byte range 2 end */</span><span class="cp"></span></div><div class='line' id='LC43'><br/></div><div class='line' id='LC44'><span class="cp">#elif _CODE_PAGE == 936	</span><span class="cm">/* Simplified Chinese GBK */</span><span class="cp"></span></div><div class='line' id='LC45'><span class="cp">#define _DF1S	0x81</span></div><div class='line' id='LC46'><span class="cp">#define _DF1E	0xFE</span></div><div class='line' id='LC47'><span class="cp">#define _DS1S	0x40</span></div><div class='line' id='LC48'><span class="cp">#define _DS1E	0x7E</span></div><div class='line' id='LC49'><span class="cp">#define _DS2S	0x80</span></div><div class='line' id='LC50'><span class="cp">#define _DS2E	0xFE</span></div><div class='line' id='LC51'><br/></div><div class='line' id='LC52'><span class="cp">#elif _CODE_PAGE == 949	</span><span class="cm">/* Korean */</span><span class="cp"></span></div><div class='line' id='LC53'><span class="cp">#define _DF1S	0x81</span></div><div class='line' id='LC54'><span class="cp">#define _DF1E	0xFE</span></div><div class='line' id='LC55'><span class="cp">#define _DS1S	0x41</span></div><div class='line' id='LC56'><span class="cp">#define _DS1E	0x5A</span></div><div class='line' id='LC57'><span class="cp">#define _DS2S	0x61</span></div><div class='line' id='LC58'><span class="cp">#define _DS2E	0x7A</span></div><div class='line' id='LC59'><span class="cp">#define _DS3S	0x81</span></div><div class='line' id='LC60'><span class="cp">#define _DS3E	0xFE</span></div><div class='line' id='LC61'><br/></div><div class='line' id='LC62'><span class="cp">#elif _CODE_PAGE == 950	</span><span class="cm">/* Traditional Chinese Big5 */</span><span class="cp"></span></div><div class='line' id='LC63'><span class="cp">#define _DF1S	0x81</span></div><div class='line' id='LC64'><span class="cp">#define _DF1E	0xFE</span></div><div class='line' id='LC65'><span class="cp">#define _DS1S	0x40</span></div><div class='line' id='LC66'><span class="cp">#define _DS1E	0x7E</span></div><div class='line' id='LC67'><span class="cp">#define _DS2S	0xA1</span></div><div class='line' id='LC68'><span class="cp">#define _DS2E	0xFE</span></div><div class='line' id='LC69'><br/></div><div class='line' id='LC70'><span class="cp">#elif _CODE_PAGE == 437	</span><span class="cm">/* U.S. (OEM) */</span><span class="cp"></span></div><div class='line' id='LC71'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC72'><span class="cp">#define _EXCVT {0x80,0x9A,0x90,0x41,0x8E,0x41,0x8F,0x80,0x45,0x45,0x45,0x49,0x49,0x49,0x8E,0x8F,0x90,0x92,0x92,0x4F,0x99,0x4F,0x55,0x55,0x59,0x99,0x9A,0x9B,0x9C,0x9D,0x9E,0x9F, \</span></div><div class='line' id='LC73'><span class="cp">				0x41,0x49,0x4F,0x55,0xA5,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0x21,0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,0xBF, \</span></div><div class='line' id='LC74'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF, \</span></div><div class='line' id='LC75'><span class="cp">				0xE0,0xE1,0xE2,0xE3,0xE4,0xE5,0xE6,0xE7,0xE8,0xE9,0xEA,0xEB,0xEC,0xED,0xEE,0xEF,0xF0,0xF1,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,0xF8,0xF9,0xFA,0xFB,0xFC,0xFD,0xFE,0xFF}</span></div><div class='line' id='LC76'><br/></div><div class='line' id='LC77'><span class="cp">#elif _CODE_PAGE == 720	</span><span class="cm">/* Arabic (OEM) */</span><span class="cp"></span></div><div class='line' id='LC78'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC79'><span class="cp">#define _EXCVT {0x80,0x81,0x45,0x41,0x84,0x41,0x86,0x43,0x45,0x45,0x45,0x49,0x49,0x8D,0x8E,0x8F,0x90,0x92,0x92,0x93,0x94,0x95,0x49,0x49,0x98,0x99,0x9A,0x9B,0x9C,0x9D,0x9E,0x9F, \</span></div><div class='line' id='LC80'><span class="cp">				0xA0,0xA1,0xA2,0xA3,0xA4,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0xAD,0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,0xBF, \</span></div><div class='line' id='LC81'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF, \</span></div><div class='line' id='LC82'><span class="cp">				0xE0,0xE1,0xE2,0xE3,0xE4,0xE5,0xE6,0xE7,0xE8,0xE9,0xEA,0xEB,0xEC,0xED,0xEE,0xEF,0xF0,0xF1,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,0xF8,0xF9,0xFA,0xFB,0xFC,0xFD,0xFE,0xFF}</span></div><div class='line' id='LC83'><br/></div><div class='line' id='LC84'><span class="cp">#elif _CODE_PAGE == 737	</span><span class="cm">/* Greek (OEM) */</span><span class="cp"></span></div><div class='line' id='LC85'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC86'><span class="cp">#define _EXCVT {0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,0x90,0x92,0x92,0x93,0x94,0x95,0x96,0x97,0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87, \</span></div><div class='line' id='LC87'><span class="cp">				0x88,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,0x90,0x91,0xAA,0x92,0x93,0x94,0x95,0x96,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,0xBF, \</span></div><div class='line' id='LC88'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF, \</span></div><div class='line' id='LC89'><span class="cp">				0x97,0xEA,0xEB,0xEC,0xE4,0xED,0xEE,0xE7,0xE8,0xF1,0xEA,0xEB,0xEC,0xED,0xEE,0xEF,0xF0,0xF1,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,0xF8,0xF9,0xFA,0xFB,0xFC,0xFD,0xFE,0xFF}</span></div><div class='line' id='LC90'><br/></div><div class='line' id='LC91'><span class="cp">#elif _CODE_PAGE == 775	</span><span class="cm">/* Baltic (OEM) */</span><span class="cp"></span></div><div class='line' id='LC92'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC93'><span class="cp">#define _EXCVT {0x80,0x9A,0x91,0xA0,0x8E,0x95,0x8F,0x80,0xAD,0xED,0x8A,0x8A,0xA1,0x8D,0x8E,0x8F,0x90,0x92,0x92,0xE2,0x99,0x95,0x96,0x97,0x97,0x99,0x9A,0x9D,0x9C,0x9D,0x9E,0x9F, \</span></div><div class='line' id='LC94'><span class="cp">				0xA0,0xA1,0xE0,0xA3,0xA3,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0xAD,0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,0xBF, \</span></div><div class='line' id='LC95'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xB5,0xB6,0xB7,0xB8,0xBD,0xBE,0xC6,0xC7,0xA5,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF, \</span></div><div class='line' id='LC96'><span class="cp">				0xE0,0xE1,0xE2,0xE3,0xE5,0xE5,0xE6,0xE3,0xE8,0xE8,0xEA,0xEA,0xEE,0xED,0xEE,0xEF,0xF0,0xF1,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,0xF8,0xF9,0xFA,0xFB,0xFC,0xFD,0xFE,0xFF}</span></div><div class='line' id='LC97'><br/></div><div class='line' id='LC98'><span class="cp">#elif _CODE_PAGE == 850	</span><span class="cm">/* Multilingual Latin 1 (OEM) */</span><span class="cp"></span></div><div class='line' id='LC99'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC100'><span class="cp">#define _EXCVT {0x80,0x9A,0x90,0xB6,0x8E,0xB7,0x8F,0x80,0xD2,0xD3,0xD4,0xD8,0xD7,0xDE,0x8E,0x8F,0x90,0x92,0x92,0xE2,0x99,0xE3,0xEA,0xEB,0x59,0x99,0x9A,0x9D,0x9C,0x9D,0x9E,0x9F, \</span></div><div class='line' id='LC101'><span class="cp">				0xB5,0xD6,0xE0,0xE9,0xA5,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0x21,0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,0xBF, \</span></div><div class='line' id='LC102'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC7,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF, \</span></div><div class='line' id='LC103'><span class="cp">				0xE0,0xE1,0xE2,0xE3,0xE5,0xE5,0xE6,0xE7,0xE7,0xE9,0xEA,0xEB,0xED,0xED,0xEE,0xEF,0xF0,0xF1,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,0xF8,0xF9,0xFA,0xFB,0xFC,0xFD,0xFE,0xFF}</span></div><div class='line' id='LC104'><br/></div><div class='line' id='LC105'><span class="cp">#elif _CODE_PAGE == 852	</span><span class="cm">/* Latin 2 (OEM) */</span><span class="cp"></span></div><div class='line' id='LC106'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC107'><span class="cp">#define _EXCVT {0x80,0x9A,0x90,0xB6,0x8E,0xDE,0x8F,0x80,0x9D,0xD3,0x8A,0x8A,0xD7,0x8D,0x8E,0x8F,0x90,0x91,0x91,0xE2,0x99,0x95,0x95,0x97,0x97,0x99,0x9A,0x9B,0x9B,0x9D,0x9E,0x9F, \</span></div><div class='line' id='LC108'><span class="cp">				0xB5,0xD6,0xE0,0xE9,0xA4,0xA4,0xA6,0xA6,0xA8,0xA8,0xAA,0x8D,0xAC,0xB8,0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBD,0xBF, \</span></div><div class='line' id='LC109'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC6,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD1,0xD1,0xD2,0xD3,0xD2,0xD5,0xD6,0xD7,0xB7,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF, \</span></div><div class='line' id='LC110'><span class="cp">				0xE0,0xE1,0xE2,0xE3,0xE3,0xD5,0xE6,0xE6,0xE8,0xE9,0xE8,0xEB,0xED,0xED,0xDD,0xEF,0xF0,0xF1,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,0xF8,0xF9,0xFA,0xEB,0xFC,0xFC,0xFE,0xFF}</span></div><div class='line' id='LC111'><br/></div><div class='line' id='LC112'><span class="cp">#elif _CODE_PAGE == 855	</span><span class="cm">/* Cyrillic (OEM) */</span><span class="cp"></span></div><div class='line' id='LC113'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC114'><span class="cp">#define _EXCVT {0x81,0x81,0x83,0x83,0x85,0x85,0x87,0x87,0x89,0x89,0x8B,0x8B,0x8D,0x8D,0x8F,0x8F,0x91,0x91,0x93,0x93,0x95,0x95,0x97,0x97,0x99,0x99,0x9B,0x9B,0x9D,0x9D,0x9F,0x9F, \</span></div><div class='line' id='LC115'><span class="cp">				0xA1,0xA1,0xA3,0xA3,0xA5,0xA5,0xA7,0xA7,0xA9,0xA9,0xAB,0xAB,0xAD,0xAD,0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB6,0xB6,0xB8,0xB8,0xB9,0xBA,0xBB,0xBC,0xBE,0xBE,0xBF, \</span></div><div class='line' id='LC116'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC7,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD1,0xD1,0xD3,0xD3,0xD5,0xD5,0xD7,0xD7,0xDD,0xD9,0xDA,0xDB,0xDC,0xDD,0xE0,0xDF, \</span></div><div class='line' id='LC117'><span class="cp">				0xE0,0xE2,0xE2,0xE4,0xE4,0xE6,0xE6,0xE8,0xE8,0xEA,0xEA,0xEC,0xEC,0xEE,0xEE,0xEF,0xF0,0xF2,0xF2,0xF4,0xF4,0xF6,0xF6,0xF8,0xF8,0xFA,0xFA,0xFC,0xFC,0xFD,0xFE,0xFF}</span></div><div class='line' id='LC118'><br/></div><div class='line' id='LC119'><span class="cp">#elif _CODE_PAGE == 857	</span><span class="cm">/* Turkish (OEM) */</span><span class="cp"></span></div><div class='line' id='LC120'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC121'><span class="cp">#define _EXCVT {0x80,0x9A,0x90,0xB6,0x8E,0xB7,0x8F,0x80,0xD2,0xD3,0xD4,0xD8,0xD7,0x98,0x8E,0x8F,0x90,0x92,0x92,0xE2,0x99,0xE3,0xEA,0xEB,0x98,0x99,0x9A,0x9D,0x9C,0x9D,0x9E,0x9E, \</span></div><div class='line' id='LC122'><span class="cp">				0xB5,0xD6,0xE0,0xE9,0xA5,0xA5,0xA6,0xA6,0xA8,0xA9,0xAA,0xAB,0xAC,0x21,0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,0xBF, \</span></div><div class='line' id='LC123'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC7,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF, \</span></div><div class='line' id='LC124'><span class="cp">				0xE0,0xE1,0xE2,0xE3,0xE5,0xE5,0xE6,0xE7,0xE8,0xE9,0xEA,0xEB,0xDE,0x59,0xEE,0xEF,0xF0,0xF1,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,0xF8,0xF9,0xFA,0xFB,0xFC,0xFD,0xFE,0xFF}</span></div><div class='line' id='LC125'><br/></div><div class='line' id='LC126'><span class="cp">#elif _CODE_PAGE == 858	</span><span class="cm">/* Multilingual Latin 1 + Euro (OEM) */</span><span class="cp"></span></div><div class='line' id='LC127'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC128'><span class="cp">#define _EXCVT {0x80,0x9A,0x90,0xB6,0x8E,0xB7,0x8F,0x80,0xD2,0xD3,0xD4,0xD8,0xD7,0xDE,0x8E,0x8F,0x90,0x92,0x92,0xE2,0x99,0xE3,0xEA,0xEB,0x59,0x99,0x9A,0x9D,0x9C,0x9D,0x9E,0x9F, \</span></div><div class='line' id='LC129'><span class="cp">				0xB5,0xD6,0xE0,0xE9,0xA5,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0x21,0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,0xBF, \</span></div><div class='line' id='LC130'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC7,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD1,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF, \</span></div><div class='line' id='LC131'><span class="cp">				0xE0,0xE1,0xE2,0xE3,0xE5,0xE5,0xE6,0xE7,0xE7,0xE9,0xEA,0xEB,0xED,0xED,0xEE,0xEF,0xF0,0xF1,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,0xF8,0xF9,0xFA,0xFB,0xFC,0xFD,0xFE,0xFF}</span></div><div class='line' id='LC132'><br/></div><div class='line' id='LC133'><span class="cp">#elif _CODE_PAGE == 862	</span><span class="cm">/* Hebrew (OEM) */</span><span class="cp"></span></div><div class='line' id='LC134'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC135'><span class="cp">#define _EXCVT {0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,0x90,0x91,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0x9A,0x9B,0x9C,0x9D,0x9E,0x9F, \</span></div><div class='line' id='LC136'><span class="cp">				0x41,0x49,0x4F,0x55,0xA5,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0x21,0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,0xBF, \</span></div><div class='line' id='LC137'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF, \</span></div><div class='line' id='LC138'><span class="cp">				0xE0,0xE1,0xE2,0xE3,0xE4,0xE5,0xE6,0xE7,0xE8,0xE9,0xEA,0xEB,0xEC,0xED,0xEE,0xEF,0xF0,0xF1,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,0xF8,0xF9,0xFA,0xFB,0xFC,0xFD,0xFE,0xFF}</span></div><div class='line' id='LC139'><br/></div><div class='line' id='LC140'><span class="cp">#elif _CODE_PAGE == 866	</span><span class="cm">/* Russian (OEM) */</span><span class="cp"></span></div><div class='line' id='LC141'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC142'><span class="cp">#define _EXCVT {0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,0x90,0x91,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0x9A,0x9B,0x9C,0x9D,0x9E,0x9F, \</span></div><div class='line' id='LC143'><span class="cp">				0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,0xBF, \</span></div><div class='line' id='LC144'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF, \</span></div><div class='line' id='LC145'><span class="cp">				0x90,0x91,0x92,0x93,0x9d,0x95,0x96,0x97,0x98,0x99,0x9A,0x9B,0x9C,0x9D,0x9E,0x9F,0xF0,0xF0,0xF2,0xF2,0xF4,0xF4,0xF6,0xF6,0xF8,0xF9,0xFA,0xFB,0xFC,0xFD,0xFE,0xFF}</span></div><div class='line' id='LC146'><br/></div><div class='line' id='LC147'><span class="cp">#elif _CODE_PAGE == 874	</span><span class="cm">/* Thai (OEM, Windows) */</span><span class="cp"></span></div><div class='line' id='LC148'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC149'><span class="cp">#define _EXCVT {0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,0x90,0x91,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0x9A,0x9B,0x9C,0x9D,0x9E,0x9F, \</span></div><div class='line' id='LC150'><span class="cp">				0xA0,0xA1,0xA2,0xA3,0xA4,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0xAD,0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,0xBF, \</span></div><div class='line' id='LC151'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF, \</span></div><div class='line' id='LC152'><span class="cp">				0xE0,0xE1,0xE2,0xE3,0xE4,0xE5,0xE6,0xE7,0xE8,0xE9,0xEA,0xEB,0xEC,0xED,0xEE,0xEF,0xF0,0xF1,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,0xF8,0xF9,0xFA,0xFB,0xFC,0xFD,0xFE,0xFF}</span></div><div class='line' id='LC153'><br/></div><div class='line' id='LC154'><span class="cp">#elif _CODE_PAGE == 1250 </span><span class="cm">/* Central Europe (Windows) */</span><span class="cp"></span></div><div class='line' id='LC155'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC156'><span class="cp">#define _EXCVT {0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,0x90,0x91,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0x8A,0x9B,0x8C,0x8D,0x8E,0x8F, \</span></div><div class='line' id='LC157'><span class="cp">				0xA0,0xA1,0xA2,0xA3,0xA4,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0xAD,0xAE,0xAF,0xB0,0xB1,0xB2,0xA3,0xB4,0xB5,0xB6,0xB7,0xB8,0xA5,0xAA,0xBB,0xBC,0xBD,0xBC,0xAF, \</span></div><div class='line' id='LC158'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF, \</span></div><div class='line' id='LC159'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xF7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xFF}</span></div><div class='line' id='LC160'><br/></div><div class='line' id='LC161'><span class="cp">#elif _CODE_PAGE == 1251 </span><span class="cm">/* Cyrillic (Windows) */</span><span class="cp"></span></div><div class='line' id='LC162'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC163'><span class="cp">#define _EXCVT {0x80,0x81,0x82,0x82,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,0x80,0x91,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0x8A,0x9B,0x8C,0x8D,0x8E,0x8F, \</span></div><div class='line' id='LC164'><span class="cp">				0xA0,0xA2,0xA2,0xA3,0xA4,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0xAD,0xAE,0xAF,0xB0,0xB1,0xB2,0xB2,0xA5,0xB5,0xB6,0xB7,0xA8,0xB9,0xAA,0xBB,0xA3,0xBD,0xBD,0xAF, \</span></div><div class='line' id='LC165'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF, \</span></div><div class='line' id='LC166'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF}</span></div><div class='line' id='LC167'><br/></div><div class='line' id='LC168'><span class="cp">#elif _CODE_PAGE == 1252 </span><span class="cm">/* Latin 1 (Windows) */</span><span class="cp"></span></div><div class='line' id='LC169'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC170'><span class="cp">#define _EXCVT {0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,0x90,0x91,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0xAd,0x9B,0x8C,0x9D,0xAE,0x9F, \</span></div><div class='line' id='LC171'><span class="cp">				0xA0,0x21,0xA2,0xA3,0xA4,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0xAD,0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,0xBF, \</span></div><div class='line' id='LC172'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF, \</span></div><div class='line' id='LC173'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xF7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0x9F}</span></div><div class='line' id='LC174'><br/></div><div class='line' id='LC175'><span class="cp">#elif _CODE_PAGE == 1253 </span><span class="cm">/* Greek (Windows) */</span><span class="cp"></span></div><div class='line' id='LC176'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC177'><span class="cp">#define _EXCVT {0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,0x90,0x91,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0x9A,0x9B,0x9C,0x9D,0x9E,0x9F, \</span></div><div class='line' id='LC178'><span class="cp">				0xA0,0xA1,0xA2,0xA3,0xA4,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0xAD,0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,0xBF, \</span></div><div class='line' id='LC179'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xA2,0xB8,0xB9,0xBA, \</span></div><div class='line' id='LC180'><span class="cp">				0xE0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xF2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xFB,0xBC,0xFD,0xBF,0xFF}</span></div><div class='line' id='LC181'><br/></div><div class='line' id='LC182'><span class="cp">#elif _CODE_PAGE == 1254 </span><span class="cm">/* Turkish (Windows) */</span><span class="cp"></span></div><div class='line' id='LC183'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC184'><span class="cp">#define _EXCVT {0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,0x90,0x91,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0x8A,0x9B,0x8C,0x9D,0x9E,0x9F, \</span></div><div class='line' id='LC185'><span class="cp">				0xA0,0x21,0xA2,0xA3,0xA4,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0xAD,0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,0xBF, \</span></div><div class='line' id='LC186'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF, \</span></div><div class='line' id='LC187'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xF7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0x9F}</span></div><div class='line' id='LC188'><br/></div><div class='line' id='LC189'><span class="cp">#elif _CODE_PAGE == 1255 </span><span class="cm">/* Hebrew (Windows) */</span><span class="cp"></span></div><div class='line' id='LC190'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC191'><span class="cp">#define _EXCVT {0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,0x90,0x91,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0x9A,0x9B,0x9C,0x9D,0x9E,0x9F, \</span></div><div class='line' id='LC192'><span class="cp">				0xA0,0x21,0xA2,0xA3,0xA4,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0xAD,0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,0xBF, \</span></div><div class='line' id='LC193'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF, \</span></div><div class='line' id='LC194'><span class="cp">				0xE0,0xE1,0xE2,0xE3,0xE4,0xE5,0xE6,0xE7,0xE8,0xE9,0xEA,0xEB,0xEC,0xED,0xEE,0xEF,0xF0,0xF1,0xF2,0xF3,0xF4,0xF5,0xF6,0xF7,0xF8,0xF9,0xFA,0xFB,0xFC,0xFD,0xFE,0xFF}</span></div><div class='line' id='LC195'><br/></div><div class='line' id='LC196'><span class="cp">#elif _CODE_PAGE == 1256 </span><span class="cm">/* Arabic (Windows) */</span><span class="cp"></span></div><div class='line' id='LC197'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC198'><span class="cp">#define _EXCVT {0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,0x90,0x91,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0x9A,0x9B,0x8C,0x9D,0x9E,0x9F, \</span></div><div class='line' id='LC199'><span class="cp">				0xA0,0xA1,0xA2,0xA3,0xA4,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0xAD,0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,0xBF, \</span></div><div class='line' id='LC200'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF, \</span></div><div class='line' id='LC201'><span class="cp">				0x41,0xE1,0x41,0xE3,0xE4,0xE5,0xE6,0x43,0x45,0x45,0x45,0x45,0xEC,0xED,0x49,0x49,0xF0,0xF1,0xF2,0xF3,0x4F,0xF5,0xF6,0xF7,0xF8,0x55,0xFA,0x55,0x55,0xFD,0xFE,0xFF}</span></div><div class='line' id='LC202'><br/></div><div class='line' id='LC203'><span class="cp">#elif _CODE_PAGE == 1257 </span><span class="cm">/* Baltic (Windows) */</span><span class="cp"></span></div><div class='line' id='LC204'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC205'><span class="cp">#define _EXCVT {0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,0x90,0x91,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0x9A,0x9B,0x9C,0x9D,0x9E,0x9F, \</span></div><div class='line' id='LC206'><span class="cp">				0xA0,0xA1,0xA2,0xA3,0xA4,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0xAD,0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xA8,0xB9,0xAA,0xBB,0xBC,0xBD,0xBE,0xAF, \</span></div><div class='line' id='LC207'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF, \</span></div><div class='line' id='LC208'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xF7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xFF}</span></div><div class='line' id='LC209'><br/></div><div class='line' id='LC210'><span class="cp">#elif _CODE_PAGE == 1258 </span><span class="cm">/* Vietnam (OEM, Windows) */</span><span class="cp"></span></div><div class='line' id='LC211'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC212'><span class="cp">#define _EXCVT {0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8A,0x8B,0x8C,0x8D,0x8E,0x8F,0x90,0x91,0x92,0x93,0x94,0x95,0x96,0x97,0x98,0x99,0x9A,0x9B,0xAC,0x9D,0x9E,0x9F, \</span></div><div class='line' id='LC213'><span class="cp">				0xA0,0x21,0xA2,0xA3,0xA4,0xA5,0xA6,0xA7,0xA8,0xA9,0xAA,0xAB,0xAC,0xAD,0xAE,0xAF,0xB0,0xB1,0xB2,0xB3,0xB4,0xB5,0xB6,0xB7,0xB8,0xB9,0xBA,0xBB,0xBC,0xBD,0xBE,0xBF, \</span></div><div class='line' id='LC214'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD0,0xD1,0xD2,0xD3,0xD4,0xD5,0xD6,0xD7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xDE,0xDF, \</span></div><div class='line' id='LC215'><span class="cp">				0xC0,0xC1,0xC2,0xC3,0xC4,0xC5,0xC6,0xC7,0xC8,0xC9,0xCA,0xCB,0xEC,0xCD,0xCE,0xCF,0xD0,0xD1,0xF2,0xD3,0xD4,0xD5,0xD6,0xF7,0xD8,0xD9,0xDA,0xDB,0xDC,0xDD,0xFE,0x9F}</span></div><div class='line' id='LC216'><br/></div><div class='line' id='LC217'><span class="cp">#elif _CODE_PAGE == 1	</span><span class="cm">/* ASCII (for only non-LFN cfg) */</span><span class="cp"></span></div><div class='line' id='LC218'><span class="cp">#define _DF1S	0</span></div><div class='line' id='LC219'><br/></div><div class='line' id='LC220'><span class="cp">#else</span></div><div class='line' id='LC221'><span class="cp">#error Unknown code page</span></div><div class='line' id='LC222'><br/></div><div class='line' id='LC223'><span class="cp">#endif</span></div><div class='line' id='LC224'><br/></div><div class='line' id='LC225'><br/></div><div class='line' id='LC226'><br/></div><div class='line' id='LC227'><span class="cp">/* Definitions of volume management */</span></div><div class='line' id='LC228'><br/></div><div class='line' id='LC229'><span class="cp">#if _MULTI_PARTITION		</span><span class="cm">/* Multiple partition configuration */</span><span class="cp"></span></div><div class='line' id='LC230'><span class="cp">#define LD2PD(vol) (VolToPart[vol].pd)	</span><span class="cm">/* Get physical drive# */</span><span class="cp"></span></div><div class='line' id='LC231'><span class="cp">#define LD2PT(vol) (VolToPart[vol].pt)	</span><span class="cm">/* Get partition# */</span><span class="cp"></span></div><div class='line' id='LC232'><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span></div><div class='line' id='LC233'>	<span class="n">BYTE</span> <span class="n">pd</span><span class="p">;</span>	<span class="cm">/* Physical drive# */</span></div><div class='line' id='LC234'>	<span class="n">BYTE</span> <span class="n">pt</span><span class="p">;</span>	<span class="cm">/* Partition # (0-3) */</span></div><div class='line' id='LC235'><span class="p">}</span> <span class="n">PARTITION</span><span class="p">;</span></div><div class='line' id='LC236'><span class="k">extern</span> <span class="k">const</span> <span class="n">PARTITION</span> <span class="n">VolToPart</span><span class="p">[];</span>	<span class="cm">/* Volume - Physical location resolution table */</span></div><div class='line' id='LC237'><br/></div><div class='line' id='LC238'><span class="cp">#else						</span><span class="cm">/* Single partition configuration */</span><span class="cp"></span></div><div class='line' id='LC239'><span class="cp">#define LD2PD(vol) (vol)	</span><span class="cm">/* Logical drive# is bound to the same physical drive# */</span><span class="cp"></span></div><div class='line' id='LC240'><span class="cp">#define LD2PT(vol) 0		</span><span class="cm">/* Always mounts the 1st partition */</span><span class="cp"></span></div><div class='line' id='LC241'><br/></div><div class='line' id='LC242'><span class="cp">#endif</span></div><div class='line' id='LC243'><br/></div><div class='line' id='LC244'><br/></div><div class='line' id='LC245'><br/></div><div class='line' id='LC246'><span class="cp">/* Type of path name strings on FatFs API */</span></div><div class='line' id='LC247'><br/></div><div class='line' id='LC248'><span class="cp">#if _LFN_UNICODE			</span><span class="cm">/* Unicode string */</span><span class="cp"></span></div><div class='line' id='LC249'><span class="cp">#if !_USE_LFN</span></div><div class='line' id='LC250'><span class="cp">#error _LFN_UNICODE must be 0 in non-LFN cfg.</span></div><div class='line' id='LC251'><span class="cp">#endif</span></div><div class='line' id='LC252'><span class="cp">#ifndef _INC_TCHAR</span></div><div class='line' id='LC253'><span class="k">typedef</span> <span class="n">WCHAR</span> <span class="n">TCHAR</span><span class="p">;</span></div><div class='line' id='LC254'><span class="cp">#define _T(x) L ## x</span></div><div class='line' id='LC255'><span class="cp">#define _TEXT(x) L ## x</span></div><div class='line' id='LC256'><span class="cp">#endif</span></div><div class='line' id='LC257'><br/></div><div class='line' id='LC258'><span class="cp">#else						</span><span class="cm">/* ANSI/OEM string */</span><span class="cp"></span></div><div class='line' id='LC259'><span class="cp">#ifndef _INC_TCHAR</span></div><div class='line' id='LC260'><span class="k">typedef</span> <span class="kt">char</span> <span class="n">TCHAR</span><span class="p">;</span></div><div class='line' id='LC261'><span class="cp">#define _T(x) x</span></div><div class='line' id='LC262'><span class="cp">#define _TEXT(x) x</span></div><div class='line' id='LC263'><span class="cp">#endif</span></div><div class='line' id='LC264'><br/></div><div class='line' id='LC265'><span class="cp">#endif</span></div><div class='line' id='LC266'><br/></div><div class='line' id='LC267'><br/></div><div class='line' id='LC268'><br/></div><div class='line' id='LC269'><span class="cm">/* File system object structure (FATFS) */</span></div><div class='line' id='LC270'><br/></div><div class='line' id='LC271'><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span></div><div class='line' id='LC272'>	<span class="n">BYTE</span>	<span class="n">fs_type</span><span class="p">;</span>		<span class="cm">/* FAT sub-type (0:Not mounted) */</span></div><div class='line' id='LC273'>	<span class="n">BYTE</span>	<span class="n">drv</span><span class="p">;</span>			<span class="cm">/* Physical drive number */</span></div><div class='line' id='LC274'>	<span class="n">BYTE</span>	<span class="n">csize</span><span class="p">;</span>			<span class="cm">/* Sectors per cluster (1,2,4...128) */</span></div><div class='line' id='LC275'>	<span class="n">BYTE</span>	<span class="n">n_fats</span><span class="p">;</span>			<span class="cm">/* Number of FAT copies (1,2) */</span></div><div class='line' id='LC276'>	<span class="n">BYTE</span>	<span class="n">wflag</span><span class="p">;</span>			<span class="cm">/* win[] dirty flag (1:must be written back) */</span></div><div class='line' id='LC277'>	<span class="n">BYTE</span>	<span class="n">fsi_flag</span><span class="p">;</span>		<span class="cm">/* fsinfo dirty flag (1:must be written back) */</span></div><div class='line' id='LC278'>	<span class="n">WORD</span>	<span class="n">id</span><span class="p">;</span>				<span class="cm">/* File system mount ID */</span></div><div class='line' id='LC279'>	<span class="n">WORD</span>	<span class="n">n_rootdir</span><span class="p">;</span>		<span class="cm">/* Number of root directory entries (FAT12/16) */</span></div><div class='line' id='LC280'><span class="cp">#if _MAX_SS != 512</span></div><div class='line' id='LC281'>	<span class="n">WORD</span>	<span class="n">ssize</span><span class="p">;</span>			<span class="cm">/* Bytes per sector (512,1024,2048,4096) */</span></div><div class='line' id='LC282'><span class="cp">#endif</span></div><div class='line' id='LC283'><span class="cp">#if _FS_REENTRANT</span></div><div class='line' id='LC284'>	<span class="n">_SYNC_t</span>	<span class="n">sobj</span><span class="p">;</span>			<span class="cm">/* Identifier of sync object */</span></div><div class='line' id='LC285'><span class="cp">#endif</span></div><div class='line' id='LC286'><span class="cp">#if !_FS_READONLY</span></div><div class='line' id='LC287'>	<span class="n">DWORD</span>	<span class="n">last_clust</span><span class="p">;</span>		<span class="cm">/* Last allocated cluster */</span></div><div class='line' id='LC288'>	<span class="n">DWORD</span>	<span class="n">free_clust</span><span class="p">;</span>		<span class="cm">/* Number of free clusters */</span></div><div class='line' id='LC289'>	<span class="n">DWORD</span>	<span class="n">fsi_sector</span><span class="p">;</span>		<span class="cm">/* fsinfo sector (FAT32) */</span></div><div class='line' id='LC290'><span class="cp">#endif</span></div><div class='line' id='LC291'><span class="cp">#if _FS_RPATH</span></div><div class='line' id='LC292'>	<span class="n">DWORD</span>	<span class="n">cdir</span><span class="p">;</span>			<span class="cm">/* Current directory start cluster (0:root) */</span></div><div class='line' id='LC293'><span class="cp">#endif</span></div><div class='line' id='LC294'>	<span class="n">DWORD</span>	<span class="n">n_fatent</span><span class="p">;</span>		<span class="cm">/* Number of FAT entries (= number of clusters + 2) */</span></div><div class='line' id='LC295'>	<span class="n">DWORD</span>	<span class="n">fsize</span><span class="p">;</span>			<span class="cm">/* Sectors per FAT */</span></div><div class='line' id='LC296'>	<span class="n">DWORD</span>	<span class="n">fatbase</span><span class="p">;</span>		<span class="cm">/* FAT start sector */</span></div><div class='line' id='LC297'>	<span class="n">DWORD</span>	<span class="n">dirbase</span><span class="p">;</span>		<span class="cm">/* Root directory start sector (FAT32:Cluster#) */</span></div><div class='line' id='LC298'>	<span class="n">DWORD</span>	<span class="n">database</span><span class="p">;</span>		<span class="cm">/* Data start sector */</span></div><div class='line' id='LC299'>	<span class="n">DWORD</span>	<span class="n">winsect</span><span class="p">;</span>		<span class="cm">/* Current sector appearing in the win[] */</span></div><div class='line' id='LC300'>	<span class="n">BYTE</span>	<span class="n">win</span><span class="p">[</span><span class="n">_MAX_SS</span><span class="p">];</span>	<span class="cm">/* Disk access window for Directory, FAT (and Data on tiny cfg) */</span></div><div class='line' id='LC301'><span class="p">}</span> <span class="n">FATFS</span><span class="p">;</span></div><div class='line' id='LC302'><br/></div><div class='line' id='LC303'><br/></div><div class='line' id='LC304'><br/></div><div class='line' id='LC305'><span class="cm">/* File object structure (FIL) */</span></div><div class='line' id='LC306'><br/></div><div class='line' id='LC307'><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span></div><div class='line' id='LC308'>	<span class="n">FATFS</span><span class="o">*</span>	<span class="n">fs</span><span class="p">;</span>				<span class="cm">/* Pointer to the owner file system object */</span></div><div class='line' id='LC309'>	<span class="n">WORD</span>	<span class="n">id</span><span class="p">;</span>				<span class="cm">/* Owner file system mount ID */</span></div><div class='line' id='LC310'>	<span class="n">BYTE</span>	<span class="n">flag</span><span class="p">;</span>			<span class="cm">/* File status flags */</span></div><div class='line' id='LC311'>	<span class="n">BYTE</span>	<span class="n">pad1</span><span class="p">;</span></div><div class='line' id='LC312'>	<span class="n">DWORD</span>	<span class="n">fptr</span><span class="p">;</span>			<span class="cm">/* File read/write pointer (0 on file open) */</span></div><div class='line' id='LC313'>	<span class="n">DWORD</span>	<span class="n">fsize</span><span class="p">;</span>			<span class="cm">/* File size */</span></div><div class='line' id='LC314'>	<span class="n">DWORD</span>	<span class="n">org_clust</span><span class="p">;</span>		<span class="cm">/* File start cluster (0 when fsize==0) */</span></div><div class='line' id='LC315'>	<span class="n">DWORD</span>	<span class="n">curr_clust</span><span class="p">;</span>		<span class="cm">/* Current cluster */</span></div><div class='line' id='LC316'>	<span class="n">DWORD</span>	<span class="n">dsect</span><span class="p">;</span>			<span class="cm">/* Current data sector */</span></div><div class='line' id='LC317'><span class="cp">#if !_FS_READONLY</span></div><div class='line' id='LC318'>	<span class="n">DWORD</span>	<span class="n">dir_sect</span><span class="p">;</span>		<span class="cm">/* Sector containing the directory entry */</span></div><div class='line' id='LC319'>	<span class="n">BYTE</span><span class="o">*</span>	<span class="n">dir_ptr</span><span class="p">;</span>		<span class="cm">/* Ponter to the directory entry in the window */</span></div><div class='line' id='LC320'><span class="cp">#endif</span></div><div class='line' id='LC321'><span class="cp">#if _USE_FASTSEEK</span></div><div class='line' id='LC322'>	<span class="n">DWORD</span><span class="o">*</span>	<span class="n">cltbl</span><span class="p">;</span>			<span class="cm">/* Pointer to the cluster link map table (null on file open) */</span></div><div class='line' id='LC323'><span class="cp">#endif</span></div><div class='line' id='LC324'><span class="cp">#if _FS_SHARE</span></div><div class='line' id='LC325'>	<span class="n">UINT</span>	<span class="n">lockid</span><span class="p">;</span>			<span class="cm">/* File lock ID (index of file semaphore table) */</span></div><div class='line' id='LC326'><span class="cp">#endif</span></div><div class='line' id='LC327'><span class="cp">#if !_FS_TINY</span></div><div class='line' id='LC328'>	<span class="n">BYTE</span>	<span class="n">buf</span><span class="p">[</span><span class="n">_MAX_SS</span><span class="p">];</span>	<span class="cm">/* File data read/write buffer */</span></div><div class='line' id='LC329'><span class="cp">#endif</span></div><div class='line' id='LC330'><span class="p">}</span> <span class="n">FIL</span><span class="p">;</span></div><div class='line' id='LC331'><br/></div><div class='line' id='LC332'><br/></div><div class='line' id='LC333'><br/></div><div class='line' id='LC334'><span class="cm">/* Directory object structure (DIR) */</span></div><div class='line' id='LC335'><br/></div><div class='line' id='LC336'><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span></div><div class='line' id='LC337'>	<span class="n">FATFS</span><span class="o">*</span>	<span class="n">fs</span><span class="p">;</span>				<span class="cm">/* Pointer to the owner file system object */</span></div><div class='line' id='LC338'>	<span class="n">WORD</span>	<span class="n">id</span><span class="p">;</span>				<span class="cm">/* Owner file system mount ID */</span></div><div class='line' id='LC339'>	<span class="n">WORD</span>	<span class="n">index</span><span class="p">;</span>			<span class="cm">/* Current read/write index number */</span></div><div class='line' id='LC340'>	<span class="n">DWORD</span>	<span class="n">sclust</span><span class="p">;</span>			<span class="cm">/* Table start cluster (0:Root dir) */</span></div><div class='line' id='LC341'>	<span class="n">DWORD</span>	<span class="n">clust</span><span class="p">;</span>			<span class="cm">/* Current cluster */</span></div><div class='line' id='LC342'>	<span class="n">DWORD</span>	<span class="n">sect</span><span class="p">;</span>			<span class="cm">/* Current sector */</span></div><div class='line' id='LC343'>	<span class="n">BYTE</span><span class="o">*</span>	<span class="n">dir</span><span class="p">;</span>			<span class="cm">/* Pointer to the current SFN entry in the win[] */</span></div><div class='line' id='LC344'>	<span class="n">BYTE</span><span class="o">*</span>	<span class="n">fn</span><span class="p">;</span>				<span class="cm">/* Pointer to the SFN (in/out) {file[8],ext[3],status[1]} */</span></div><div class='line' id='LC345'><span class="cp">#if _USE_LFN</span></div><div class='line' id='LC346'>	<span class="n">WCHAR</span><span class="o">*</span>	<span class="n">lfn</span><span class="p">;</span>			<span class="cm">/* Pointer to the LFN working buffer */</span></div><div class='line' id='LC347'>	<span class="n">WORD</span>	<span class="n">lfn_idx</span><span class="p">;</span>		<span class="cm">/* Last matched LFN index number (0xFFFF:No LFN) */</span></div><div class='line' id='LC348'><span class="cp">#endif</span></div><div class='line' id='LC349'><span class="p">}</span> <span class="kt">DIR</span><span class="p">;</span></div><div class='line' id='LC350'><br/></div><div class='line' id='LC351'><br/></div><div class='line' id='LC352'><br/></div><div class='line' id='LC353'><span class="cm">/* File status structure (FILINFO) */</span></div><div class='line' id='LC354'><br/></div><div class='line' id='LC355'><span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span></div><div class='line' id='LC356'>	<span class="n">DWORD</span>	<span class="n">fsize</span><span class="p">;</span>			<span class="cm">/* File size */</span></div><div class='line' id='LC357'>	<span class="n">WORD</span>	<span class="n">fdate</span><span class="p">;</span>			<span class="cm">/* Last modified date */</span></div><div class='line' id='LC358'>	<span class="n">WORD</span>	<span class="n">ftime</span><span class="p">;</span>			<span class="cm">/* Last modified time */</span></div><div class='line' id='LC359'>	<span class="n">BYTE</span>	<span class="n">fattrib</span><span class="p">;</span>		<span class="cm">/* Attribute */</span></div><div class='line' id='LC360'>	<span class="n">TCHAR</span>	<span class="n">fname</span><span class="p">[</span><span class="mi">13</span><span class="p">];</span>		<span class="cm">/* Short file name (8.3 format) */</span></div><div class='line' id='LC361'><span class="cp">#if _USE_LFN</span></div><div class='line' id='LC362'>	<span class="n">TCHAR</span><span class="o">*</span>	<span class="n">lfname</span><span class="p">;</span>			<span class="cm">/* Pointer to the LFN buffer */</span></div><div class='line' id='LC363'>	<span class="n">UINT</span> 	<span class="n">lfsize</span><span class="p">;</span>			<span class="cm">/* Size of LFN buffer in TCHAR */</span></div><div class='line' id='LC364'><span class="cp">#endif</span></div><div class='line' id='LC365'><span class="p">}</span> <span class="n">FILINFO</span><span class="p">;</span></div><div class='line' id='LC366'><br/></div><div class='line' id='LC367'><br/></div><div class='line' id='LC368'><br/></div><div class='line' id='LC369'><span class="cm">/* File function return code (FRESULT) */</span></div><div class='line' id='LC370'><br/></div><div class='line' id='LC371'><span class="k">typedef</span> <span class="k">enum</span> <span class="p">{</span></div><div class='line' id='LC372'>	<span class="n">FR_OK</span> <span class="o">=</span> <span class="mi">0</span><span class="p">,</span>				<span class="cm">/* (0) Succeeded */</span></div><div class='line' id='LC373'>	<span class="n">FR_DISK_ERR</span><span class="p">,</span>			<span class="cm">/* (1) A hard error occured in the low level disk I/O layer */</span></div><div class='line' id='LC374'>	<span class="n">FR_INT_ERR</span><span class="p">,</span>				<span class="cm">/* (2) Assertion failed */</span></div><div class='line' id='LC375'>	<span class="n">FR_NOT_READY</span><span class="p">,</span>			<span class="cm">/* (3) The physical drive cannot work */</span></div><div class='line' id='LC376'>	<span class="n">FR_NO_FILE</span><span class="p">,</span>				<span class="cm">/* (4) Could not find the file */</span></div><div class='line' id='LC377'>	<span class="n">FR_NO_PATH</span><span class="p">,</span>				<span class="cm">/* (5) Could not find the path */</span></div><div class='line' id='LC378'>	<span class="n">FR_INVALID_NAME</span><span class="p">,</span>		<span class="cm">/* (6) The path name format is invalid */</span></div><div class='line' id='LC379'>	<span class="n">FR_DENIED</span><span class="p">,</span>				<span class="cm">/* (7) Acces denied due to prohibited access or directory full */</span></div><div class='line' id='LC380'>	<span class="n">FR_EXIST</span><span class="p">,</span>				<span class="cm">/* (8) Acces denied due to prohibited access */</span></div><div class='line' id='LC381'>	<span class="n">FR_INVALID_OBJECT</span><span class="p">,</span>		<span class="cm">/* (9) The file/directory object is invalid */</span></div><div class='line' id='LC382'>	<span class="n">FR_WRITE_PROTECTED</span><span class="p">,</span>		<span class="cm">/* (10) The physical drive is write protected */</span></div><div class='line' id='LC383'>	<span class="n">FR_INVALID_DRIVE</span><span class="p">,</span>		<span class="cm">/* (11) The logical drive number is invalid */</span></div><div class='line' id='LC384'>	<span class="n">FR_NOT_ENABLED</span><span class="p">,</span>			<span class="cm">/* (12) The volume has no work area */</span></div><div class='line' id='LC385'>	<span class="n">FR_NO_FILESYSTEM</span><span class="p">,</span>		<span class="cm">/* (13) There is no valid FAT volume on the physical drive */</span></div><div class='line' id='LC386'>	<span class="n">FR_MKFS_ABORTED</span><span class="p">,</span>		<span class="cm">/* (14) The f_mkfs() aborted due to any parameter error */</span></div><div class='line' id='LC387'>	<span class="n">FR_TIMEOUT</span><span class="p">,</span>				<span class="cm">/* (15) Could not get a grant to access the volume within defined period */</span></div><div class='line' id='LC388'>	<span class="n">FR_LOCKED</span><span class="p">,</span>				<span class="cm">/* (16) The operation is rejected according to the file shareing policy */</span></div><div class='line' id='LC389'>	<span class="n">FR_NOT_ENOUGH_CORE</span><span class="p">,</span>		<span class="cm">/* (17) LFN working buffer could not be allocated */</span></div><div class='line' id='LC390'>	<span class="n">FR_TOO_MANY_OPEN_FILES</span>	<span class="cm">/* (18) Number of open files &gt; _FS_SHARE */</span></div><div class='line' id='LC391'><span class="p">}</span> <span class="n">FRESULT</span><span class="p">;</span></div><div class='line' id='LC392'><br/></div><div class='line' id='LC393'><br/></div><div class='line' id='LC394'><br/></div><div class='line' id='LC395'><span class="cm">/*--------------------------------------------------------------*/</span></div><div class='line' id='LC396'><span class="cm">/* FatFs module application interface                           */</span></div><div class='line' id='LC397'><br/></div><div class='line' id='LC398'><span class="n">FRESULT</span> <span class="n">f_mount</span> <span class="p">(</span><span class="n">BYTE</span><span class="p">,</span> <span class="n">FATFS</span><span class="o">*</span><span class="p">);</span>						<span class="cm">/* Mount/Unmount a logical drive */</span></div><div class='line' id='LC399'><span class="n">FRESULT</span> <span class="n">f_open</span> <span class="p">(</span><span class="n">FIL</span><span class="o">*</span><span class="p">,</span> <span class="k">const</span> <span class="n">TCHAR</span><span class="o">*</span><span class="p">,</span> <span class="n">BYTE</span><span class="p">);</span>			<span class="cm">/* Open or create a file */</span></div><div class='line' id='LC400'><span class="n">FRESULT</span> <span class="n">f_read</span> <span class="p">(</span><span class="n">FIL</span><span class="o">*</span><span class="p">,</span> <span class="kt">void</span><span class="o">*</span><span class="p">,</span> <span class="n">UINT</span><span class="p">,</span> <span class="n">UINT</span><span class="o">*</span><span class="p">);</span>			<span class="cm">/* Read data from a file */</span></div><div class='line' id='LC401'><span class="n">FRESULT</span> <span class="n">f_lseek</span> <span class="p">(</span><span class="n">FIL</span><span class="o">*</span><span class="p">,</span> <span class="n">DWORD</span><span class="p">);</span>						<span class="cm">/* Move file pointer of a file object */</span></div><div class='line' id='LC402'><span class="n">FRESULT</span> <span class="n">f_close</span> <span class="p">(</span><span class="n">FIL</span><span class="o">*</span><span class="p">);</span>								<span class="cm">/* Close an open file object */</span></div><div class='line' id='LC403'><span class="n">FRESULT</span> <span class="n">f_opendir</span> <span class="p">(</span><span class="kt">DIR</span><span class="o">*</span><span class="p">,</span> <span class="k">const</span> <span class="n">TCHAR</span><span class="o">*</span><span class="p">);</span>				<span class="cm">/* Open an existing directory */</span></div><div class='line' id='LC404'><span class="n">FRESULT</span> <span class="n">f_readdir</span> <span class="p">(</span><span class="kt">DIR</span><span class="o">*</span><span class="p">,</span> <span class="n">FILINFO</span><span class="o">*</span><span class="p">);</span>					<span class="cm">/* Read a directory item */</span></div><div class='line' id='LC405'><span class="n">FRESULT</span> <span class="n">f_stat</span> <span class="p">(</span><span class="k">const</span> <span class="n">TCHAR</span><span class="o">*</span><span class="p">,</span> <span class="n">FILINFO</span><span class="o">*</span><span class="p">);</span>			<span class="cm">/* Get file status */</span></div><div class='line' id='LC406'><br/></div><div class='line' id='LC407'><span class="cp">#if !_FS_READONLY</span></div><div class='line' id='LC408'><span class="n">FRESULT</span> <span class="n">f_write</span> <span class="p">(</span><span class="n">FIL</span><span class="o">*</span><span class="p">,</span> <span class="k">const</span> <span class="kt">void</span><span class="o">*</span><span class="p">,</span> <span class="n">UINT</span><span class="p">,</span> <span class="n">UINT</span><span class="o">*</span><span class="p">);</span>	<span class="cm">/* Write data to a file */</span></div><div class='line' id='LC409'><span class="n">FRESULT</span> <span class="n">f_getfree</span> <span class="p">(</span><span class="k">const</span> <span class="n">TCHAR</span><span class="o">*</span><span class="p">,</span> <span class="n">DWORD</span><span class="o">*</span><span class="p">,</span> <span class="n">FATFS</span><span class="o">**</span><span class="p">);</span>	<span class="cm">/* Get number of free clusters on the drive */</span></div><div class='line' id='LC410'><span class="n">FRESULT</span> <span class="n">f_truncate</span> <span class="p">(</span><span class="n">FIL</span><span class="o">*</span><span class="p">);</span>							<span class="cm">/* Truncate file */</span></div><div class='line' id='LC411'><span class="n">FRESULT</span> <span class="n">f_sync</span> <span class="p">(</span><span class="n">FIL</span><span class="o">*</span><span class="p">);</span>								<span class="cm">/* Flush cached data of a writing file */</span></div><div class='line' id='LC412'><span class="n">FRESULT</span> <span class="n">f_unlink</span> <span class="p">(</span><span class="k">const</span> <span class="n">TCHAR</span><span class="o">*</span><span class="p">);</span>					<span class="cm">/* Delete an existing file or directory */</span></div><div class='line' id='LC413'><span class="n">FRESULT</span>	<span class="n">f_mkdir</span> <span class="p">(</span><span class="k">const</span> <span class="n">TCHAR</span><span class="o">*</span><span class="p">);</span>						<span class="cm">/* Create a new directory */</span></div><div class='line' id='LC414'><span class="n">FRESULT</span> <span class="n">f_chmod</span> <span class="p">(</span><span class="k">const</span> <span class="n">TCHAR</span><span class="o">*</span><span class="p">,</span> <span class="n">BYTE</span><span class="p">,</span> <span class="n">BYTE</span><span class="p">);</span>			<span class="cm">/* Change attriburte of the file/dir */</span></div><div class='line' id='LC415'><span class="n">FRESULT</span> <span class="n">f_utime</span> <span class="p">(</span><span class="k">const</span> <span class="n">TCHAR</span><span class="o">*</span><span class="p">,</span> <span class="k">const</span> <span class="n">FILINFO</span><span class="o">*</span><span class="p">);</span>		<span class="cm">/* Change timestamp of the file/dir */</span></div><div class='line' id='LC416'><span class="n">FRESULT</span> <span class="n">f_rename</span> <span class="p">(</span><span class="k">const</span> <span class="n">TCHAR</span><span class="o">*</span><span class="p">,</span> <span class="k">const</span> <span class="n">TCHAR</span><span class="o">*</span><span class="p">);</span>		<span class="cm">/* Rename/Move a file or directory */</span></div><div class='line' id='LC417'><span class="cp">#endif</span></div><div class='line' id='LC418'><br/></div><div class='line' id='LC419'><span class="cp">#if _USE_FORWARD</span></div><div class='line' id='LC420'><span class="n">FRESULT</span> <span class="n">f_forward</span> <span class="p">(</span><span class="n">FIL</span><span class="o">*</span><span class="p">,</span> <span class="n">UINT</span><span class="p">(</span><span class="o">*</span><span class="p">)(</span><span class="k">const</span> <span class="n">BYTE</span><span class="o">*</span><span class="p">,</span><span class="n">UINT</span><span class="p">),</span> <span class="n">UINT</span><span class="p">,</span> <span class="n">UINT</span><span class="o">*</span><span class="p">);</span>	<span class="cm">/* Forward data to the stream */</span></div><div class='line' id='LC421'><span class="cp">#endif</span></div><div class='line' id='LC422'><br/></div><div class='line' id='LC423'><span class="cp">#if _USE_MKFS</span></div><div class='line' id='LC424'><span class="n">FRESULT</span> <span class="n">f_mkfs</span> <span class="p">(</span><span class="n">BYTE</span><span class="p">,</span> <span class="n">BYTE</span><span class="p">,</span> <span class="n">UINT</span><span class="p">);</span>					<span class="cm">/* Create a file system on the drive */</span></div><div class='line' id='LC425'><span class="cp">#endif</span></div><div class='line' id='LC426'><br/></div><div class='line' id='LC427'><span class="cp">#if _FS_RPATH</span></div><div class='line' id='LC428'><span class="n">FRESULT</span> <span class="n">f_chdrive</span> <span class="p">(</span><span class="n">BYTE</span><span class="p">);</span>							<span class="cm">/* Change current drive */</span></div><div class='line' id='LC429'><span class="n">FRESULT</span> <span class="n">f_chdir</span> <span class="p">(</span><span class="k">const</span> <span class="n">TCHAR</span><span class="o">*</span><span class="p">);</span>						<span class="cm">/* Change current directory */</span></div><div class='line' id='LC430'><span class="n">FRESULT</span> <span class="n">f_getcwd</span> <span class="p">(</span><span class="n">TCHAR</span><span class="o">*</span><span class="p">,</span> <span class="n">UINT</span><span class="p">);</span>					<span class="cm">/* Get current directory */</span></div><div class='line' id='LC431'><span class="cp">#endif</span></div><div class='line' id='LC432'><br/></div><div class='line' id='LC433'><span class="cp">#if _USE_STRFUNC</span></div><div class='line' id='LC434'><span class="kt">int</span> <span class="n">f_putc</span> <span class="p">(</span><span class="n">TCHAR</span><span class="p">,</span> <span class="n">FIL</span><span class="o">*</span><span class="p">);</span>							<span class="cm">/* Put a character to the file */</span></div><div class='line' id='LC435'><span class="kt">int</span> <span class="n">f_puts</span> <span class="p">(</span><span class="k">const</span> <span class="n">TCHAR</span><span class="o">*</span><span class="p">,</span> <span class="n">FIL</span><span class="o">*</span><span class="p">);</span>					<span class="cm">/* Put a string to the file */</span></div><div class='line' id='LC436'><span class="kt">int</span> <span class="n">f_printf</span> <span class="p">(</span><span class="n">FIL</span><span class="o">*</span><span class="p">,</span> <span class="k">const</span> <span class="n">TCHAR</span><span class="o">*</span><span class="p">,</span> <span class="p">...);</span>				<span class="cm">/* Put a formatted string to the file */</span></div><div class='line' id='LC437'><span class="n">TCHAR</span><span class="o">*</span> <span class="n">f_gets</span> <span class="p">(</span><span class="n">TCHAR</span><span class="o">*</span><span class="p">,</span> <span class="kt">int</span><span class="p">,</span> <span class="n">FIL</span><span class="o">*</span><span class="p">);</span>					<span class="cm">/* Get a string from the file */</span></div><div class='line' id='LC438'><span class="cp">#ifndef EOF</span></div><div class='line' id='LC439'><span class="cp">#define EOF (-1)</span></div><div class='line' id='LC440'><span class="cp">#endif</span></div><div class='line' id='LC441'><span class="cp">#endif</span></div><div class='line' id='LC442'><br/></div><div class='line' id='LC443'><span class="cp">#define f_eof(fp) (((fp)-&gt;fptr == (fp)-&gt;fsize) ? 1 : 0)</span></div><div class='line' id='LC444'><span class="cp">#define f_error(fp) (((fp)-&gt;flag &amp; FA__ERROR) ? 1 : 0)</span></div><div class='line' id='LC445'><span class="cp">#define f_tell(fp) ((fp)-&gt;fptr)</span></div><div class='line' id='LC446'><span class="cp">#define f_size(fp) ((fp)-&gt;fsize)</span></div><div class='line' id='LC447'><br/></div><div class='line' id='LC448'><br/></div><div class='line' id='LC449'><br/></div><div class='line' id='LC450'><span class="cp">/*--------------------------------------------------------------*/</span></div><div class='line' id='LC451'><span class="cp">/* Additional user defined functions                            */</span></div><div class='line' id='LC452'><br/></div><div class='line' id='LC453'><span class="cp">/* RTC function */</span></div><div class='line' id='LC454'><span class="cp">#if !_FS_READONLY</span></div><div class='line' id='LC455'><span class="n">DWORD</span> <span class="n">get_fattime</span> <span class="p">(</span><span class="kt">void</span><span class="p">);</span></div><div class='line' id='LC456'><span class="cp">#endif</span></div><div class='line' id='LC457'><br/></div><div class='line' id='LC458'><span class="cp">/* Unicode support functions */</span></div><div class='line' id='LC459'><span class="cp">#if _USE_LFN						</span><span class="cm">/* Unicode - OEM code conversion */</span><span class="cp"></span></div><div class='line' id='LC460'><span class="n">WCHAR</span> <span class="n">ff_convert</span> <span class="p">(</span><span class="n">WCHAR</span><span class="p">,</span> <span class="n">UINT</span><span class="p">);</span>		<span class="cm">/* OEM-Unicode bidirectional conversion */</span></div><div class='line' id='LC461'><span class="n">WCHAR</span> <span class="n">ff_wtoupper</span> <span class="p">(</span><span class="n">WCHAR</span><span class="p">);</span>			<span class="cm">/* Unicode upper-case conversion */</span></div><div class='line' id='LC462'><span class="cp">#if _USE_LFN == 3					</span><span class="cm">/* Memory functions */</span><span class="cp"></span></div><div class='line' id='LC463'><span class="kt">void</span><span class="o">*</span> <span class="n">ff_memalloc</span> <span class="p">(</span><span class="n">UINT</span><span class="p">);</span>			<span class="cm">/* Allocate memory block */</span></div><div class='line' id='LC464'><span class="kt">void</span> <span class="n">ff_memfree</span> <span class="p">(</span><span class="kt">void</span><span class="o">*</span><span class="p">);</span>			<span class="cm">/* Free memory block */</span></div><div class='line' id='LC465'><span class="cp">#endif</span></div><div class='line' id='LC466'><span class="cp">#endif</span></div><div class='line' id='LC467'><br/></div><div class='line' id='LC468'><span class="cp">/* Sync functions */</span></div><div class='line' id='LC469'><span class="cp">#if _FS_REENTRANT</span></div><div class='line' id='LC470'><span class="kt">int</span> <span class="n">ff_cre_syncobj</span> <span class="p">(</span><span class="n">BYTE</span><span class="p">,</span> <span class="n">_SYNC_t</span><span class="o">*</span><span class="p">);</span><span class="cm">/* Create a sync object */</span></div><div class='line' id='LC471'><span class="kt">int</span> <span class="n">ff_del_syncobj</span> <span class="p">(</span><span class="n">_SYNC_t</span><span class="p">);</span>		<span class="cm">/* Delete a sync object */</span></div><div class='line' id='LC472'><span class="kt">int</span> <span class="n">ff_req_grant</span> <span class="p">(</span><span class="n">_SYNC_t</span><span class="p">);</span>			<span class="cm">/* Lock sync object */</span></div><div class='line' id='LC473'><span class="kt">void</span> <span class="n">ff_rel_grant</span> <span class="p">(</span><span class="n">_SYNC_t</span><span class="p">);</span>		<span class="cm">/* Unlock sync object */</span></div><div class='line' id='LC474'><span class="cp">#endif</span></div><div class='line' id='LC475'><br/></div><div class='line' id='LC476'><br/></div><div class='line' id='LC477'><br/></div><div class='line' id='LC478'><br/></div><div class='line' id='LC479'><span class="cp">/*--------------------------------------------------------------*/</span></div><div class='line' id='LC480'><span class="cp">/* Flags and offset address                                     */</span></div><div class='line' id='LC481'><br/></div><div class='line' id='LC482'><br/></div><div class='line' id='LC483'><span class="cp">/* File access control and file status flags (FIL.flag) */</span></div><div class='line' id='LC484'><br/></div><div class='line' id='LC485'><span class="cp">#define	FA_READ				0x01</span></div><div class='line' id='LC486'><span class="cp">#define	FA_OPEN_EXISTING	0x00</span></div><div class='line' id='LC487'><span class="cp">#define FA__ERROR			0x80</span></div><div class='line' id='LC488'><br/></div><div class='line' id='LC489'><span class="cp">#if !_FS_READONLY</span></div><div class='line' id='LC490'><span class="cp">#define	FA_WRITE			0x02</span></div><div class='line' id='LC491'><span class="cp">#define	FA_CREATE_NEW		0x04</span></div><div class='line' id='LC492'><span class="cp">#define	FA_CREATE_ALWAYS	0x08</span></div><div class='line' id='LC493'><span class="cp">#define	FA_OPEN_ALWAYS		0x10</span></div><div class='line' id='LC494'><span class="cp">#define FA__WRITTEN			0x20</span></div><div class='line' id='LC495'><span class="cp">#define FA__DIRTY			0x40</span></div><div class='line' id='LC496'><span class="cp">#endif</span></div><div class='line' id='LC497'><br/></div><div class='line' id='LC498'><br/></div><div class='line' id='LC499'><span class="cp">/* FAT sub type (FATFS.fs_type) */</span></div><div class='line' id='LC500'><br/></div><div class='line' id='LC501'><span class="cp">#define FS_FAT12	1</span></div><div class='line' id='LC502'><span class="cp">#define FS_FAT16	2</span></div><div class='line' id='LC503'><span class="cp">#define FS_FAT32	3</span></div><div class='line' id='LC504'><br/></div><div class='line' id='LC505'><br/></div><div class='line' id='LC506'><span class="cp">/* File attribute bits for directory entry */</span></div><div class='line' id='LC507'><br/></div><div class='line' id='LC508'><span class="cp">#define	AM_RDO	0x01	</span><span class="cm">/* Read only */</span><span class="cp"></span></div><div class='line' id='LC509'><span class="cp">#define	AM_HID	0x02	</span><span class="cm">/* Hidden */</span><span class="cp"></span></div><div class='line' id='LC510'><span class="cp">#define	AM_SYS	0x04	</span><span class="cm">/* System */</span><span class="cp"></span></div><div class='line' id='LC511'><span class="cp">#define	AM_VOL	0x08	</span><span class="cm">/* Volume label */</span><span class="cp"></span></div><div class='line' id='LC512'><span class="cp">#define AM_LFN	0x0F	</span><span class="cm">/* LFN entry */</span><span class="cp"></span></div><div class='line' id='LC513'><span class="cp">#define AM_DIR	0x10	</span><span class="cm">/* Directory */</span><span class="cp"></span></div><div class='line' id='LC514'><span class="cp">#define AM_ARC	0x20	</span><span class="cm">/* Archive */</span><span class="cp"></span></div><div class='line' id='LC515'><span class="cp">#define AM_MASK	0x3F	</span><span class="cm">/* Mask of defined bits */</span><span class="cp"></span></div><div class='line' id='LC516'><br/></div><div class='line' id='LC517'><br/></div><div class='line' id='LC518'><span class="cp">/* Fast seek function */</span></div><div class='line' id='LC519'><span class="cp">#define CREATE_LINKMAP	0xFFFFFFFF</span></div><div class='line' id='LC520'><br/></div><div class='line' id='LC521'><br/></div><div class='line' id='LC522'><span class="cp">/*--------------------------------*/</span></div><div class='line' id='LC523'><span class="cp">/* Multi-byte word access macros  */</span></div><div class='line' id='LC524'><br/></div><div class='line' id='LC525'><span class="cp">#if _WORD_ACCESS == 1	</span><span class="cm">/* Enable word access to the FAT structure */</span><span class="cp"></span></div><div class='line' id='LC526'><span class="cp">#define	LD_WORD(ptr)		(WORD)(*(WORD*)(BYTE*)(ptr))</span></div><div class='line' id='LC527'><span class="cp">#define	LD_DWORD(ptr)		(DWORD)(*(DWORD*)(BYTE*)(ptr))</span></div><div class='line' id='LC528'><span class="cp">#define	ST_WORD(ptr,val)	*(WORD*)(BYTE*)(ptr)=(WORD)(val)</span></div><div class='line' id='LC529'><span class="cp">#define	ST_DWORD(ptr,val)	*(DWORD*)(BYTE*)(ptr)=(DWORD)(val)</span></div><div class='line' id='LC530'><span class="cp">#else					</span><span class="cm">/* Use byte-by-byte access to the FAT structure */</span><span class="cp"></span></div><div class='line' id='LC531'><span class="cp">#define	LD_WORD(ptr)		(WORD)(((WORD)*(BYTE*)((ptr)+1)&lt;&lt;8)|(WORD)*(BYTE*)(ptr))</span></div><div class='line' id='LC532'><span class="cp">#define	LD_DWORD(ptr)		(DWORD)(((DWORD)*(BYTE*)((ptr)+3)&lt;&lt;24)|((DWORD)*(BYTE*)((ptr)+2)&lt;&lt;16)|((WORD)*(BYTE*)((ptr)+1)&lt;&lt;8)|*(BYTE*)(ptr))</span></div><div class='line' id='LC533'><span class="cp">#define	ST_WORD(ptr,val)	*(BYTE*)(ptr)=(BYTE)(val); *(BYTE*)((ptr)+1)=(BYTE)((WORD)(val)&gt;&gt;8)</span></div><div class='line' id='LC534'><span class="cp">#define	ST_DWORD(ptr,val)	*(BYTE*)(ptr)=(BYTE)(val); *(BYTE*)((ptr)+1)=(BYTE)((WORD)(val)&gt;&gt;8); *(BYTE*)((ptr)+2)=(BYTE)((DWORD)(val)&gt;&gt;16); *(BYTE*)((ptr)+3)=(BYTE)((DWORD)(val)&gt;&gt;24)</span></div><div class='line' id='LC535'><span class="cp">#endif</span></div><div class='line' id='LC536'><br/></div><div class='line' id='LC537'><span class="cp">#ifdef __cplusplus</span></div><div class='line' id='LC538'><span class="p">}</span></div><div class='line' id='LC539'><span class="cp">#endif</span></div><div class='line' id='LC540'><br/></div><div class='line' id='LC541'><span class="cp">#endif </span><span class="cm">/* _FATFS */</span><span class="cp"></span></div><div class='line' id='LC542'><br/></div></pre></div>
              
            
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
          <li class="main">&copy; 2011 <span id="_rrt" title="0.34496s from fe6.rs.github.com">GitHub</span> Inc. All rights reserved.</li>
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

    
    
    
    <script type="text/javascript">(function(){var d=document;var e=d.createElement("script");e.async=true;e.src="https://d1ros97qkrwjf5.cloudfront.net/14/eum/rum.js	";e.type="text/javascript";var s=d.getElementsByTagName("script")[0];s.parentNode.insertBefore(e,s);})();NREUMQ.push(["nrf2","beacon-1.newrelic.com","2f94e4d8c2",64799,"dw1bEBZcX1RWRhoEClsAGhcMXEQ=",0.0,340,new Date().getTime()])</script>
  </body>
</html>

