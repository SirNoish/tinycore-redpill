# M Shell for tinycore-redpill


<img width="1022" alt="스크린샷 2023-03-22 오전 12 50 30" src="https://user-images.githubusercontent.com/85427533/226664725-0669b127-f3c8-4c4f-8486-a4734f09db69.png">



### This is a testing version. Do not use unless you are certain you have no data to lose.

### Please note that minimum recommended memory size for configuring the loader is 2GB


# Instructions 

A typical build process starts with:

1. Burn images

    A. To burn physical gunzip and img files to a USB stick
    
    B. For virtual gunzip use the provided vmdk file
    
2. Boot Tinycore

3. Loader Building

<img width="1021" alt="스크린샷 2023-03-01 오후 8 29 11" src="https://user-images.githubusercontent.com/85427533/222127202-64d8ec9b-118d-42d7-b2a7-048098836c1d.png">


        A. Choose one of the Synology models.


<img width="507" alt="스크린샷 2023-02-24 오후 6 32 42" src="https://user-images.githubusercontent.com/85427533/221143853-02cd5136-98be-422a-94f2-44a8d39cd8d7.png">


        B. Create a virtual serial number or enter a prepared serial number.


<img width="480" alt="스크린샷 2023-02-24 오후 6 58 31" src="https://user-images.githubusercontent.com/85427533/221150226-bb4af0cd-068e-4fca-b726-475016a0183e.png">


        C. Select the real mac address of the nic or create a virtual mac address or 
           input the prepared mac address. 
           (If there are 2 nics, you can enter up to the 2nd mac address)
    
    
<img width="492" alt="스크린샷 2023-02-24 오후 7 02 21" src="https://user-images.githubusercontent.com/85427533/221150320-2421f744-d5b5-4fe8-8e99-247919afa8e7.png">
    
    
        D. Build the loader.

6. Reboot
