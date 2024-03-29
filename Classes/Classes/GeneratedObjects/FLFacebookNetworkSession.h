// 
// FLFacebookNetworkSession.h
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
@class FLObjectDescriber;
@interface FLFacebookNetworkSession : FLModelObject {
@private
    NSString* _appId;
    NSDate* _expiration_date;
    NSMutableArray* _permissions;
    NSString* _userId;
    NSString* _access_token;
}

@property (readwrite, strong, nonatomic) NSString* appId;
@property (readwrite, strong, nonatomic) NSDate* expiration_date;
@property (readwrite, strong, nonatomic) NSMutableArray* permissions;
@property (readwrite, strong, nonatomic) NSString* userId;
@property (readwrite, strong, nonatomic) NSString* access_token;
+(FLFacebookNetworkSession*) facebookNetworkSession;
@end
