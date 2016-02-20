# MOBILE FINGER SIGNATURE

## Verification

1. Run this code and login with member@topcoder.com / t0pc0d3r

2. Open 'Sample Requests' tab.

3. Select a request

4. Draw a signature

5. Send it (by tapping 'Confirm')

6. You can verify changes by going to salesforce.com in your browser and using the same credentials as in 1.

7. After confirmation the signature is cached until it's been successfully delivered to Salesforce. You can close the app after tapping 'Confirm' and reopen it to verify the behavior quickly.

Video overview is available in 'new overview.swf' (you can simply use your browser to view it).

I've used the same master branch for git (the updated repo included).

## Third party libraries

I've added the mentioned GLPaint example code.
I've also added [MBProgressHUD](https://github.com/jdg/MBProgressHUD) (MIT licensed) pod. Used for a fancy activity indicator.

## Configuration

The added configuration is related to the PDF layout:

pdfWidth, pdfHeight - the sheet size
pdfRowHeight - row heights (white)
pdfHeaderHeight - header heights (light gray)
pdfName - attachment name
pdfFontSize - font size used for text
pdfPadding - padding used for text & top offset

You can also change the particle used for drawing signature (it's a part of GLPaint)