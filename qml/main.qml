import QtQuick 2.12
import QtQuick.Controls 2.12
import QtMultimedia 5.8 
import QtQuick.Controls 2.5 
import QtQuick.Layouts 1.15
import QtQuick.Controls.Material 2.12

ApplicationWindow {
	id: window
	title: "aula-1"
	visible: true
	height:400
	width:600

	Material.theme: Material.Dark
	Material.accent: Material.Purple

	Video {
		id: video
		anchors.fill: parent
		source: "rtsp://wowzaec2demo.streamlock.net/vod/mp4:BigBuckBunny_115k.mp4"
	}

	Timer {
		running: true
		repeat: true
		onTriggered: print(video.duration, video.position)
	}
	
	RowLayout {
		anchors.bottom: parent.bottom
		anchors.horizontalCenter: parent.horizontalCenter
		Button {
			text: video.playbackState == MediaPlayer.PlayingState ? "Stop" : "Play" 
			opacity: 0.5
			onClicked: {
				if(video.playbackState == MediaPlayer.PlayingState) 
				{
					video.stop()
				} else {
					video.play()
				}
			}
		}
		ProgressBar {
			value: video.position/video.duration
		}
	}

}
