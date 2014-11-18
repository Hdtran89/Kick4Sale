//
//  ImageDatabase.h
//  Kicks4Sale
//
//  Created by Hieu Tran on 8/15/14.
//  Copyright (c) 2014 Watdahieu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ImageDatabase : NSObject
{
    NSDictionary * data;
    NSData * imagedata;
    NSString * name;
    NSNumber * price;
    NSString * description;
}
@property(retain,nonatomic) NSDictionary * dataDictionary;
@property(retain,nonatomic) NSString *kickName;
@property(retain,nonatomic) NSString *kickDescription;
@property(retain,nonatomic) NSNumber *kickPrice;

-(NSDictionary *)StoreDataInDictionary:(NSString *)itemname
                              forPrice:(NSNumber *)pricetag
                         forDesciption:(NSString *)itemdescription
                             forImages:(NSData *)images;

-(void)GrabJson;


@end
