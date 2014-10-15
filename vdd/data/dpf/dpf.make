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
projects[drupal][version] = "7.31"

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
projects[ctools][version] = 1.4
projects[devel][version] = 1.5
projects[ds][version] = 2.6
projects[entity][version] = 1.5
projects[entityreference][version] = 1.1
projects[entity_view_mode][version] = 1.0-rc1
projects[features][version] = 2.2
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
