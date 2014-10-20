<img alt="hayaan fugate" src="/docs/hayaan-smirk.jpg" align="right">

DPF's "Coloring Book"
===
This is a drupal 7 based "coloring book" for the personal website of David Plutado Fugate, which is currently in heavy development and will deployed at https://davidfugate.com.  What is a coloring book?  A coloring book is simply an analogy for the patterns, features, and methodologies that will be used to implement the functionality for my personal site.  Once the coloring book is published (the site is live), all that is left to do is to add my own color (ie. my personal content).


### Details
This site is built using drupal 7 (https://www.drupal.org).  More specifically, it's currently using version 7.32.  You must have a 64-bit system in order to properly install your local development environment, as the virtual machine running will be a _Ubuntu Precise 12.04 64-bit_ box.  This build leverages the Vagrant Drupal Development module (https://www.drupal.org/project/vdd) for building out the environment.


### Installation
<b>Step 1: </b>You will need to download and install a couple of software programs needed to run a local development environment on your computer.
- VirtualBox | https://www.virtualbox.org/wiki/Downloads -- version 4.3.16
- Vagrant | http://vagrantup.com -- version 1.5.4

<b>Step 2: </b>Clone the repo using command line interface (ie Terminal, Term2, ect) <br/>
<pre><code>$ git clone https://github.com/plutado/dpf.git</code></pre>

<b>Step: </b>Vagrant up <br/>
<pre><code>$ cd dpf/vdd</code></pre>
<pre><code>$ vagrant up</code></pre>

<b>Step :</b> Login into vagrant box via command line
<pre><code>$ vagrant ssh</code></pre>

<pre><code>$ cd sites/dpf</code></pre>
<pre><code>$ drush make dpf.make -y</code></pre>
<pre><code>$ drush @dpf si dpf -y</code></pre>
<pre><code>$ cd sites/all/themes/plutado</code></pre>
<pre><code>$ sudo gem install bundler</code></pre>
<pre><code>$ bundle install</code></pre>

<b>Step :</b> Visit http://dpf.local/user in browser <br>
- username: root <br>
- password: root <br>

### Contributed Modules
- <a href="https://www.drupal.org/project/advanced_help">Advanced Help</a>
- <a href="https://www.drupal.org/project/bean">Bean</a>
- <a href="https://www.drupal.org/project/blockify">Blockify</a>
- <a href="https://www.drupal.org/project/borealis">Borealis Suite</a>
- <a href="https://www.drupal.org/project/ckeditor">CKEditor</a>
- <a href="https://www.drupal.org/project/ctools">Chaos tool suite (ctools)</a>
- <a href="https://www.drupal.org/project/devel">Devel</a>
- <a href="https://www.drupal.org/project/ds">Display Suite</a>
- <a href="https://www.drupal.org/project/elements">Elements</a>
- <a href="https://www.drupal.org/project/entity">Entity API</a>
- <a href="https://www.drupal.org/project/entityreference">Entity Reference</a>
- <a href="https://www.drupal.org/project/entity_view_mode">Entity View Mode</a>
- <a href="https://www.drupal.org/project/features">Features</a>
- <a href="https://www.drupal.org/project/field_formatter_settings">Field Formatter Settings</a>
- <a href="https://www.drupal.org/project/fences">Fences</a>
- <a href="https://www.drupal.org/project/globalredirect">Global Redirect</a>
- <a href="https://www.drupal.org/project/html5_tools">HTML5 Tools</a>
- <a href="https://www.drupal.org/project/jquery_update">jQuery Update</a>
- <a href="https://www.drupal.org/project/libraries">Libraries API</a>
- <a href="https://www.drupal.org/project/magic">Magic</a>
- <a href="https://www.drupal.org/project/master">Master</a>
- <a href="https://www.drupal.org/project/modernizr">Modernizr</a>
- <a href="https://www.drupal.org/project/panels">Panels</a>
- <a href="https://www.drupal.org/project/prev_next">Prev/Next API</a>
- <a href="https://www.drupal.org/project/plupload">Plupload integration</a>
- <a href="https://www.drupal.org/project/restws">RESTful Web Services</a>
- <a href="https://www.drupal.org/project/scald">Scald: Media Management</a>
- <a href="https://www.drupal.org/project/seckit">Security Kit</a>
- <a href="https://www.drupal.org/project/search_krumo">Search Krumo</a>
- <a href="https://www.drupal.org/project/views">Views</a>
- <a href="https://www.drupal.org/project/wysiwyg">WYSIWYG</a> 

### Libraries
- CKEditor
- Modernizr
- NiceEdit
- Plupload

### Custom Modules


### Custom Theme
<pre><code>$ drush dl aurora</code></pre>
<pre><code>$ yo aurora</code></pre>


### Troubleshooting

Update the aurora generator: 
<pre><code>npm update -g generator-aurora</code></pre>

Installing a new theme
make sure node.js is installed on your host machine

<pre><code>$ npm install -g yo generator-aurora</code></pre>
<pre><code>$ npm install -g bower</code></pre>
<pre><code>$ npm install -g gulp</code></pre>


### Coloring Book Rules


### Credits


### License

Licensed under GPL.

- GPL2 license: http://www.gnu.org/licenses/gpl-2.0.html
