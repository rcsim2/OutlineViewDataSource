//
//  FileSystemItem.h
//  OutlineViewDataSource
//
//  Created by Rik Goossens on 07/03/2020.
//  Copyright © 2020 Rik Goossens. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FileSystemItem : NSObject
{
    NSString *relativePath;
    FileSystemItem *parent;
    NSMutableArray *children;
}
 
+ (FileSystemItem *)rootItem;
- (NSInteger)numberOfChildren;// Returns -1 for leaf nodes
- (FileSystemItem *)childAtIndex:(NSUInteger)n; // Invalid to call on leaf nodes
- (NSString *)fullPath;
- (NSString *)relativePath;
 
@end


NS_ASSUME_NONNULL_END
