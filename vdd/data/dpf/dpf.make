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
projects[drupal][version] = "7.32"

; Projects
; --------
; Each project that you would like to include in the makefile should be
; declared under the `projects` key. The simplest declaration of a project
; looks like this:

; Add contributed modules to the 'contrib' directory
defaults[projects][subdir] = "contrib"

projects[advanced_help][version] = 1.1
projects[bean][version] = 1.8
projects[blockify][version] = 1.2
projects[borealis][version] = 2.2
projects[ckeditor][version] = 1.14
projects[ctools][version] = 1.4
projects[devel][version] = 1.5
projects[ds][version] = 2.6
projects[elements][version] = 1.4
projects[entity][version] = 1.5
projects[entityreference][version] = 1.1
projects[entity_view_mode][version] = 1.0-rc1
projects[features][version] = 2.2
projects[field_formatter_settings][version] = 1.1
projects[fences][version] = 1.0
projects[globalredirect][version] = 1.5
projects[html5_tools][version] = 1.2
projects[job_scheduler][version] = 2.0-alpha3
projects[jquery_update][version] = 2.4
projects[libraries][version] = 2.2
projects[magic][version] = 1.5
projects[modernizr][version] = 3.3
projects[panels][version] = 3.4
projects[panels_everywhere][version] = 1.0-rc1
projects[prev_next][version] = 2.x-dev
projects[plupload][version] = 1.6
projects[restws][version] = 2.2
projects[scald][version] = 1.2
projects[seckit][version] = 1.9
projects[search_krumo][version] = 1.5
projects[views][version] = 3.8
projects[wysiwyg][version] = 2.2

projects[aurora] = 3.x-dev

; Libraries
; --------

; CKEditor 4.2.1
libraries[ckeditor][download][type]= "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.2.1/ckeditor_4.2.1_full.zip"
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"

; modernizr
libraries[html5shiv][download][type]= "get"
libraries[html5shiv][download][url] = "https://cdnjs.cloudflare.com/ajax/libs/modernizr/2.8.3/modernizr.min.js"
libraries[html5shiv][directory_name] = "modernizr"
libraries[html5shiv][destination] = "libraries"

; plupload
libraries[plupload][download][type]= "get"
libraries[plupload][download][url] = "https://github.com/downloads/moxiecode/plupload/plupload_1_5_4.zip"
libraries[plupload][directory_name] = "plupload"
libraries[plupload][destination] = "libraries"


