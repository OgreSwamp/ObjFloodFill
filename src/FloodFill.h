//
//  FloodFill.h
//  DaVinchiApp
//
//  Created by OgreSwamp on 21/06/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#define COLOR_DEPTH 4
#define THRESHOULD 25

typedef struct {
    int red;
    int green;
    int blue;
    int alpha;
} color;

// Definint a linked list structure
struct node_st {
    int x;
    int y;
    struct node_st *next;
};
typedef struct node_st node;

@interface FloodFill : NSObject {



}

+(int)floodfillX:(int)x Y:(int)y image:(unsigned char*)image width:(int)w height:(int)h origIntColor:(int)iOrigColor replacementIntColor:(int)iColor;
+(color)imkcolor:(int)thecolor;
+(color)mkcolorR:(int)red G:(char)green B:(char)blue A:(char)alpha;
+(int)getIndexX:(int)x Y:(int)y W:(int)w;
+(color)getColorForINDEX:(int)index fromImage:(unsigned char*)image;
+(BOOL)compareColorForPointX:(int)x Y:(int)y image:(unsigned char*)image width:(int)w height:(int)h targetColor:(color)target;
+(BOOL)compareColor:(color)current withTargetColor:(color) target;
+(color)blendColor:(color)current withColor:(color)replacement alpha:(int) alpha;
+ (BOOL) isColorsSimilar:(color)color1 withColor:(color)color2; 
+(color)getColorForX:(int)x Y:(int)y fromImage:(unsigned char*)image imageWidth:(int)w;

@end
