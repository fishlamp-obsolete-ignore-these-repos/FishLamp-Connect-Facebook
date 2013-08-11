// 
// FLFacebookUser.h
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
@class FLObjectDescriber;
@class FLFacebookWorkHistory;
@interface FLFacebookUser : FLFacebookNamedObject {
@private
    NSString* _third_party_id;
    FLFacebookNamedObject* _location;
    NSString* _birthday;
    NSString* _education;
    NSString* _link;
    FLFacebookNamedObject* _hometown;
    NSString* _religion;
    NSMutableArray* _work;
    FLFacebookNamedObject* _significant_other;
    NSString* _relationship_status;
    NSString* _bio;
    NSString* _locale;
    NSString* _last_name;
    BOOL _verified;
    NSString* _quotes;
    NSString* _gender;
    NSString* _website;
    NSString* _about;
    int _timezone;
    NSString* _political;
    NSString* _interested_in;
    NSDate* _updated_time;
    NSString* _first_name;
    NSString* _username;
}

@property (readwrite, strong, nonatomic) NSString* third_party_id;
@property (readwrite, strong, nonatomic) FLFacebookNamedObject* location;
@property (readwrite, strong, nonatomic) NSString* birthday;
@property (readwrite, strong, nonatomic) NSString* education;
@property (readwrite, strong, nonatomic) NSString* link;
@property (readwrite, strong, nonatomic) FLFacebookNamedObject* hometown;
@property (readwrite, strong, nonatomic) NSString* religion;
@property (readwrite, strong, nonatomic) NSMutableArray* work;
@property (readwrite, strong, nonatomic) FLFacebookNamedObject* significant_other;
@property (readwrite, strong, nonatomic) NSString* relationship_status;
@property (readwrite, strong, nonatomic) NSString* bio;
@property (readwrite, strong, nonatomic) NSString* locale;
@property (readwrite, strong, nonatomic) NSString* last_name;
@property (readwrite, assign, nonatomic) BOOL verified;
@property (readwrite, strong, nonatomic) NSString* quotes;
@property (readwrite, strong, nonatomic) NSString* gender;
@property (readwrite, strong, nonatomic) NSString* website;
@property (readwrite, strong, nonatomic) NSString* about;
@property (readwrite, assign, nonatomic) int timezone;
@property (readwrite, strong, nonatomic) NSString* political;
@property (readwrite, strong, nonatomic) NSString* interested_in;
@property (readwrite, strong, nonatomic) NSDate* updated_time;
@property (readwrite, strong, nonatomic) NSString* first_name;
@property (readwrite, strong, nonatomic) NSString* username;
+(FLFacebookUser*) facebookUser;
@end
