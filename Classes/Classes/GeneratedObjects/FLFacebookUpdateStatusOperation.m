// 
// FLFacebookUpdateStatusOperation.m
// 
// DO NOT MODIFY!! Modifications will be overwritten.
// Generated by: Mike Fullerton @ 5/28/13 2:04 PM with PackMule (3.0.0.1)
// 
// Project: FishLamp Connect
// Schema: FishLampFacebook
// 
// Copyright 2013 (c) GreenTongue Software, LLC
// 

#import "FLFacebookUpdateStatusOperation.h"
#import "FLFacebookStatusMessage.h"
@implementation FLFacebookUpdateStatusOperation
@synthesize input = _input;
@synthesize output = _output;
+(FLFacebookUpdateStatusOperation*) facebookUpdateStatusOperation {
    return FLAutorelease([[[self class] alloc] init]);
}
#if FL_MRC
-(void) dealloc {
    [_input release];
    [_output release];
    [super dealloc];
}
#endif
@end
