import cv2 
try :
    img=cv2.imread(r"D:\Downloads\testcv.jpg",1)
    resized_img=cv2.resize(img,[800,400])
    #CV2 HAS A FUNCTION RESIZE WHICH IS USED TO RESIZE THE IMAGE THE ARGUMENTS GIVEN ARE
    #(SOURCE_IMAGE,LIST_OF DIMENSION[WIDTH, HEIGHT], FX , FY , INTERPOLATION)
    cv2.imshow("resized_img",resized_img)
    cv2.waitKey(0)
   

    #croping images
    croped_image=img[50:400 , 200:400] # here we slice the part of the image by img[starty:endy, startx:endx]
    cv2.imshow("cropedimage",croped_image)
    cv2.waitKey(0)
    print(croped_image.shape)

    #rotating and image
    M=cv2.getRotationMatrix2D((328//2,200//2),90,1.0) # this will generate an instrustion matrix to tell the center angle and scale 
    rotated_img=cv2.warpAffine(croped_image,M,(328,200)) #arguments are (IMAGE_SOURCE,  INSTRUCTION MATRIX, (WIDTH AND HEIGHT))
    cv2.imshow("rotatedimg",rotated_img)
    cv2.waitKey(0)
    

    #flipping the image
    #flip code 0 is veritaclly code 1 horizontally code -1 for both horizontally and verically
    fliped=cv2.flip(croped_image,1)# for flipping we use cv2.flip (image source, filecode)
    print("fliped")
    cv2.imshow("fliped",fliped)
    cv2.waitKey(0)
    cv2.destroyAllWindows()

except:
    print ("error") 