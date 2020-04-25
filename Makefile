render: clean
	povray config/render.ini

frames: clean
	povray config/frames.ini

preview_frames: clean
	povray config/preview.ini

video: frames
	ffmpeg -r 30 -i output/bounce_box%03d.png -c:v libx264 -vf "fps=25,format=yuv420p" output/bounce_box.mp4
	rm output/*.png
	

preview_video: preview_frames
	ffmpeg -r 30 -i output/bounce_box%02d.png -c:v libx264 -vf "fps=25,format=yuv420p" output/bounce_box.mp4
	rm -f output/*.png

clean:
	rm -f output/*