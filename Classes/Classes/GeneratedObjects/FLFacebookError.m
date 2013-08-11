// 
// FLFacebookError.m
// 
// DO NOT MODIFY!! Modifications will be overwritten.
// Generated by: Mike Fullerton @ 5/28/13 2:04 PM with PackMule (3.0.0.1)
// 
// Project: FishLamp Connect
// Schema: FishLampFacebook
// 
// Copyright 2013 (c) GreenTongue Software, LLC
// 

#import "FLFacebookError.h"
#import "FLModelObject.h"
@implementation FLFacebookError
@synthesize error_reason = _error_reason;
@synthesize error_description = _error_description;
@synthesize externalUrl = _externalUrl;
@synthesize error = _error;
+(FLFacebookError*) facebookError {
    return FLAutorelease([[[self class] alloc] init]);
}
#if FL_MRC
-(void) dealloc {
    [_error_reason release];
    [_error_description release];
    [_externalUrl release];
    [_error release];
    [super dealloc];
}
#endif
@end