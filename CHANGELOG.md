Release Notes
=============

New Features in this Release (3.1.0.v20130305173300)
----------------------------------------------------

TUE MAR 05, 2013 5:33:00 PM PST

* Maps Support  
* Keyboard Type Support  
* Orientation
* Support All Default Studio Templates
* Relative CommonJS Support and Scoping 
* Overlapping Window Support


Notes on Maps Support
---------------------

* Ti.Map.View has been added along with Ti.Map.Annotation. However, in this release Annotations will not work because support for Annotations is not available in the BlackBerry Golden Master build for the Z10. We are working with BlackBerry to get clarity on this issue.

New Features in this Release (3.1.0.v20130213122031)
----------------------------------------------------

* Database 
* WebView 
* 2.0 Layout Engine
* Touch Events
* Simple TableViewRow

Notes on Ti.UI.FILL
-------------------

When using Ti.UI.FILL on root windows, there is a pixel shift towards bottom on top and right on left side. This only appears on the simulator. This is a visual issue and does not effect application functionality.


Previous Releases
-----------------

* HTTPClient
* TCPSocket
* Window 
* AlertDialog
* View
* Button
* TextField 
* Label 
* TableView 
* ProgressBar
* Slider
* Titanium Studio Integration (Project creation, Deploy Simulator/Device, BlackBerry World Publish)


Remaining Functionality for Beta Release
----------------------------------------

* TableViewSection (TIMOB-8840)
* Geolocation (TIMOB-12234)
* ScrollView (TIMOB-8832)
* Additional Window/TabGroup/ImageView/Blob and Network functionality (TIMOB-9605, TIMOB-9604, TIMOB-10275, TIMOB-10873, TIMOB-10083, TIMOB-10871)


Additional Functionality for GA Release
---------------------------------------

* Facebook (TIMOB-12225)
* Toolbar (TIMOB-12516)
* Filesystem (TIMOB-8580)
* XML (TIMOB-8592)
* ScrollableView (TIMOB-8831)
* Accelerometer (TIMOB-12233)
* Analytics (TIMOB-12236)
* Additional Media APIs
* Native modules (TIMOB-12224)
* VideoPlayer (TIMOB-12230)
* Contacts (TIMOB-12235)
* Search Bar (TIMOB-8833)


To get the latest Preview Release build, go to http://builds.appcelerator.com.s3.amazonaws.com/index.html and in the branch drop-down choose "master" then select the listed build. Subsequent builds will continue to be updated but the Preview Release has been tested to ensure basic functionality is working as expected. To see how to integrate the nightly with Titanium Studio visit http://preview.appcelerator.com/studio/bb. 


The TIMOB-* entries refer to tickets in our Jira bug and feature tracking system. The tickets are public and can be viewed at  https://jira.appcelerator.org/browse/TIMOB- ticket number.


