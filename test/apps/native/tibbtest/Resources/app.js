
var win = Titanium.UI.createWindow({orientationModes:[Ti.UI.PORTRAIT]});


var mountainView = Titanium.Map.createAnnotation({
    latitude:37.389493,
    longitude:-122.050166,
    title:"Appcelerator Headquarters",
    subtitle:'Mountain View, CA',
    pincolor:Ti.Map.ANNOTATION_GREEN,
    rightView: 'images/appcelerator_small.png',
    leftView: 'images/appcelerator_small.png',
    myid: 1
});

var tlBeerGarden = Titanium.Map.createAnnotation({
    latitude:37.390749,
    longitude:-122.051651,
    title:"TL Beer Garden",
    subtitle:'Sunnyvale, CA',
    pincolor:Ti.Map.ANNOTATION_RED,
    rightImage: 'images/appcelerator_small.png',
    leftImage: 'images/appcelerator_small.png',
    myid: 2
});

var mapview = Titanium.Map.createView({
    region: {latitude:37.390749, longitude:-122.051651},
    annotations:[mountainView, tlBeerGarden]
});

win.add(mapview);


// Handle click events on any annotations on this map.
tlBeerGarden.addEventListener('click', function(evt) {

	//mapview.removeAnnotation(tlBeerGarden);
	
	Ti.API.info("Annotation click event recieved");
	
});


win.open();
