import cv2
#drawing a line on image
#using cv2.line
img=cv2.imread(r"D:\Downloads\testcv.jpg",1)
#calculating points for line
image_shape=[img.shape[:2]]
pt1=(270,75)
pt2=(350,75)
color=(0,255,0)
thick=1
# cv2.line(img,pt1,pt2,color,thick) #pt1a dn pt2 are points from which line pass through and color is tuple with (blu,green,red) colors and thick is the thickness of the line
# cv2.imshow("linedimage",img)
# cv2.waitKey(0)
# cv2.destroyAllWindows()

#drawing a rectangle
color=(0,255,0)
thick=1
pt1=(250,75) #top left corner
pt2=(370,295) #bottom right corner
# cv2.rectangle(img,pt1,pt2,color,thick)
# cv2.imshow("rectangle",img)
# cv2.waitKey(0)
# cv2.destroyAllWindows()

#drawing circel
center=(image_shape[0][0]//2+120,image_shape[0][1]//2-150)
radius=60
color=color
thick=thick
# cv2.circle(img,center,radius,color,thick)
# cv2.imshow("ccircle",img)
# cv2.waitKey(0)
# cv2.destroyAllWindows()

#adding text
text="rocket"
org=(380,300) #point for text
font=cv2.FONT_HERSHEY_SIMPLEX
fontscale=1.2
color=color
thick=4

cv2.putText(img,text,org,font,fontscale,color,thick)
cv2.imshow("with text",img)
cv2.waitKey(0)
cv2.destroyAllWindows()