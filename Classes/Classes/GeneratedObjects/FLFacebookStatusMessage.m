// 
// FLFacebookStatusMessage.m
// 
// DO NOT MODIFY!! Modifications will be overwritten.
// Generated by: Mike Fullerton @ 5/28/13 2:04 PM with PackMule (3.0.0.1)
// 
// Project: FishLamp Connect
// Schema: FishLampFacebook
// 
// Copyright 2013 (c) GreenTongue Software, LLC
// 

#import "FLFacebookStatusMessage.h"
#import "FLFacebookNamedObject.h"
#import "FLFacebookObject.h"
@implementation FLFacebookStatusMessage
@synthesize message = _message;
@synthesize updated_time = _updated_time;
@synthesize from = _from;
+(FLFacebookStatusMessage*) facebookStatusMessage {
    return FLAutorelease([[[self class] alloc] init]);
}
#if FL_MRC
-(void) dealloc {
    [_message release];
    [_updated_time release];
    [_from release];
    [super dealloc];
}
#endif
@end
