// 
// FLFacebookApplication.h
// 
// DO NOT MODIFY!! Modifications will be overwritten.
// Generated by: Mike Fullerton @ 5/28/13 2:04 PM with PackMule (3.0.0.1)
// 
// Project: FishLamp Connect
// Schema: FishLampFacebook
// 
// Copyright 2013 (c) GreenTongue Software, LLC
// 

#import "FLFacebookNamedObject.h"
@interface FLFacebookApplication : FLFacebookNamedObject {
@private
    NSString* _link;
    NSString* _category;
    NSString* _description;
}

@property (readwrite, strong, nonatomic) NSString* link;
@property (readwrite, strong, nonatomic) NSString* category;
@property (readwrite, strong, nonatomic) NSString* description;
+(FLFacebookApplication*) facebookApplication;
@end
