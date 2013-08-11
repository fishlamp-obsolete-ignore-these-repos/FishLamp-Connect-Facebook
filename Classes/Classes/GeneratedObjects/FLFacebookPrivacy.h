// 
// FLFacebookPrivacy.h
// 
// DO NOT MODIFY!! Modifications will be overwritten.
// Generated by: Mike Fullerton @ 5/28/13 2:04 PM with PackMule (3.0.0.1)
// 
// Project: FishLamp Connect
// Schema: FishLampFacebook
// 
// Copyright 2013 (c) GreenTongue Software, LLC
// 

#import "FLModelObject.h"
@interface FLFacebookPrivacy : FLModelObject {
@private
    NSString* _value;
    NSString* _friends;
    NSString* _networks;
    NSString* _deny;
    NSString* _description;
}

@property (readwrite, strong, nonatomic) NSString* value;
@property (readwrite, strong, nonatomic) NSString* friends;
@property (readwrite, strong, nonatomic) NSString* networks;
@property (readwrite, strong, nonatomic) NSString* deny;
@property (readwrite, strong, nonatomic) NSString* description;
+(FLFacebookPrivacy*) facebookPrivacy;
@end