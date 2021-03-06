// The MIT License (MIT)
//
// Copyright (c) 2015 Alexander Grebenyuk (github.com/kean).
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

static inline CGFloat
DFAspectFitScale(CGSize imageSize, CGSize boundsSize) {
    CGFloat scaleWidth = boundsSize.width / imageSize.width;
    CGFloat scaleHeight = boundsSize.height / imageSize.height;
    return MIN(scaleWidth, scaleHeight);
}

static inline CGFloat
DFAspectFillScale(CGSize imageSize, CGSize boundsSize) {
    CGFloat scaleWidth = boundsSize.width / imageSize.width;
    CGFloat scaleHeight = boundsSize.height / imageSize.height;
    return MAX(scaleWidth, scaleHeight);
}

static inline CGSize
DFSizeScaled(CGSize size, CGFloat scale) {
    return CGSizeMake(size.width * scale, size.height * scale);
}

static inline CGSize
DFImageBitmapPixelSize(UIImage *image) {
    return CGSizeMake(CGImageGetWidth(image.CGImage), CGImageGetHeight(image.CGImage));
}

@interface DFImageUtilities : NSObject

#pragma mark - Crop

+ (UIImage *)croppedImageWithImage:(UIImage *)image normalizedCropRect:(CGRect)cropRect;
+ (UIImage *)croppedImageWithImage:(UIImage *)image aspectFillPixelSize:(CGSize)size;

#pragma mark - Decompressing

+ (UIImage *)decompressedWithImage:(UIImage *)image;
+ (UIImage *)decompressedImageWithImage:(UIImage *)image aspectFitPixelSize:(CGSize)size;
+ (UIImage *)decompressedImageWithImage:(UIImage *)image aspectFillPixelSize:(CGSize)size;

#pragma mark - Corners

+ (UIImage *)imageWithImage:(UIImage *)image cornerRadius:(CGFloat)cornerRadius;

@end
