// 
// FLFacebookCheckin.h
// 
// DO NOT MODIFY!! Modifications will be overwritten.
// Generated by: Mike Fullerton @ 5/28/13 2:04 PM with PackMule (3.0.0.1)
// 
// Project: FishLamp Connect
// Schema: FishLampFacebook
// 
// Copyright 2013 (c) GreenTongue Software, LLC
// 

#import "FLFacebookObject.h"
@class FLFacebookDataList;
@class FLFacebookNamedObject;
@class FLFacebookPlace;
@interface FLFacebookCheckin : FLFacebookObject {
@private
    FLFacebookPlace* _place;
    FLFacebookDataList* _tags;
    NSString* _message;
    FLFacebookNamedObject* _application;
    NSDate* _created_time;
    FLFacebookObject* _from;
}

@property (readwrite, strong, nonatomic) FLFacebookPlace* place;
@property (readwrite, strong, nonatomic) FLFacebookDataList* tags;
@property (readwrite, strong, nonatomic) NSString* message;
@property (readwrite, strong, nonatomic) FLFacebookNamedObject* application;
@property (readwrite, strong, nonatomic) NSDate* created_time;
@property (readwrite, strong, nonatomic) FLFacebookObject* from;
+(FLFacebookCheckin*) facebookCheckin;
@end
