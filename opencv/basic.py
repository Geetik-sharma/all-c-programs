import cv2 as img
flag =1 #IF flag is 0 black and white if lage is 1 colour 

try:
    image=img.imread(r"D:\Downloads\testcv.jpg",flag)
    img.imshow("image",image) #frist argu is the window name and second is the img to be displayed
    img.waitKey(0)# use to wait in the window argu is time in milliseconds if 0 given it wait until press any key
    #img.destroyAllWindows()#will distroy all windows which are open related to opencv 
    img.imwrite("savedbycv.png",image)#saving image to the system after any type of processing
    print(image.shape ) #printing the shape of image contain 3 element height width and color channel 
    #if image is gray scale then the output of shape will contain only 2 elements height and width missing color channel
    gray=img.cvtColor(image, img.COLOR_BGR2GRAY) #convert the image from color to black and white
    img.imshow("grayimage",gray)
    img.waitKey(0)
    img.destroyAllWindows()
except:
    print("error")