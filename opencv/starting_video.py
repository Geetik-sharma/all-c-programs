import cv2
#capturing video 
source=0
#source=0 for internal webcam
#source=1 for external webcam
# cap=cv2.VideoCapture(0)
# while(True):
#     ret,frame=cap.read() #ret=true/false , frame=image
#     if not ret:
#         print("NO SIGNAL")
#         break
#     cv2.imshow("webcam",frame)
#     if (cv2.waitKey(1) & 0xFF==ord('q')):
#         print("quitting")
#         break
# cap.release()
# cv2.destroyAllWindows()

#saving a file

#capturing
cap=cv2.VideoCapture(source)

height=int(cap.get(cv2.CAP_PROP_FRAME_HEIGHT))
width=int(cap.get(cv2.CAP_PROP_FRAME_WIDTH))
codec=cv2.VideoWriter_fourcc(*"XVID")
#writing to file
recorder=cv2.VideoWriter("video.avi",codec,30,(width,height))
while True:
    sucess,image=cap.read()
    if not sucess:
        break
    recorder.write(image)
    cv2.imshow("recording",image)
    if cv2.waitKey(1) & 0xFF==ord('q'):
        print("saving")
        break
cap.release()
recorder.release()
cv2.destroyAllWindows()