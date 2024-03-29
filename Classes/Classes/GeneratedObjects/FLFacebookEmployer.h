// 
// FLFacebookEmployer.h
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
@interface FLFacebookEmployer : FLFacebookNamedObject {
@private
    NSString* _employer;
    NSDate* _start_date;
    NSDate* _end_date;
    NSString* _position;
    NSString* _location;
}

@property (readwrite, strong, nonatomic) NSString* employer;
@property (readwrite, strong, nonatomic) NSDate* start_date;
@property (readwrite, strong, nonatomic) NSDate* end_date;
@property (readwrite, strong, nonatomic) NSString* position;
@property (readwrite, strong, nonatomic) NSString* location;
+(FLFacebookEmployer*) facebookEmployer;
@end
