; Basic Drush Make file
;
; Usage:
; drush make --prepare-install dpf.make

; Core version
; ------------
; Each makefile should begin by declaring the core version of Drupal that all
; projects should be compatible with.

core = 7.x
api = 2

; Drupal Core
projects[drupal][type] = "core"
projects[drupal][version] = "7.34"

; Projects
; --------
; Each project that you would like to include in the makefile should be
; declared under the 'projects' key. 

; Add contributed modules to the 'contrib' directory
defaults[projects][subdir] = "contrib"

projects[advanced_help][version] = 1.1
projects[bean][version] = 1.8
projects[blockify][version] = 1.2
projects[borealis][version] = 2.2
projects[ckeditor][version] = 1.16
projects[ctools][version] = 1.5
projects[devel][version] = 1.5
projects[ds][version] = 2.7
projects[elements][version] = 1.4
projects[entity][version] = 1.5
projects[entityreference][version] = 1.1
projects[entity_view_mode][version] = 1.0-rc1
projects[features][version] = 2.2
projects[file_entity][version] = 2.0-beta1
projects[filefield_paths][version] = 1.0-beta4
projects[field_formatter_settings][version] = 1.1
projects[field_group][version] = 1.4
projects[fences][version] = 1.0
projects[globalredirect][version] = 1.5
projects[html5_tools][version] = 1.2
projects[job_scheduler][version] = 2.0-alpha3
projects[jquery_update][version] = 2.4
projects[libraries][version] = 2.2
projects[magic][version] = 2.1
projects[master][version] = 2.0-beta4
projects[manualcrop][version] = 1.4
projects[modernizr][version] = 3.3
projects[panels][version] = 3.4
projects[panels_everywhere][version] = 1.0-rc1
projects[pathauto][version] = 1.2
projects[paragraphs][version] = 1.0-beta5
projects[prev_next][version] = 2.x-dev
projects[plupload][version] = 1.7
projects[restws][version] = 2.2
projects[scald][version] = 1.3
projects[seckit][version] = 1.9
projects[search_krumo][version] = 1.5
projects[semantic_fields][version] = 1.1-beta2
projects[strongarm][version] = 2.0
projects[token][version] = 1.5
projects[views][version] = 3.8
; projects[wysiwyg][version] = 2.2

projects[aurora] = 3.4

; Libraries
; --------

; CKEditor 4.2.1
libraries[ckeditor][download][type]= "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.2.1/ckeditor_4.2.1_full.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

; modernizr
libraries[html5shiv][download][type]= "get"
;libraries[html5shiv][download][url] = "https://cdnjs.cloudflare.com/ajax/libs/modernizr/2.8.3/modernizr.min.js"
libraries[html5shiv][download][url] = "https://github.com/Modernizr/Modernizr/archive/v2.8.3.zip"
libraries[html5shiv][directory_name] = "modernizr"
libraries[html5shiv][destination] = "libraries"

; plupload
libraries[plupload][download][type]= "get"
libraries[plupload][download][url] = "https://github.com/downloads/moxiecode/plupload/plupload_1_5_4.zip"
libraries[plupload][directory_name] = "plupload"
libraries[plupload][destination] = "libraries"

; imagesloaded
libraries[imagesloaded][download][type]= "get"
libraries[imagesloaded][download][url] = https://github.com/desandro/imagesloaded/archive/v2.1.2.tar.gz
libraries[imagesloaded][directory_name] = "jquery.imagesloaded"
libraries[imagesloaded][destination] = "libraries"

; imgareaselect
libraries[imgareaselect][download][type]= "get"
libraries[imgareaselect][download][url] = http://odyniec.net/projects/imgareaselect/jquery.imgareaselect-0.9.10.zip
libraries[imgareaselect][directory_name] = "jquery.imgareaselect"
libraries[imgareaselect][destination] = "libraries"