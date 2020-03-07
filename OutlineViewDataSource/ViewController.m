//
//  ViewController.m
//  OutlineViewDataSource
//
//  Created by Rik Goossens on 07/03/2020.
//  Copyright © 2020 Rik Goossens. All rights reserved.
//

#import "ViewController.h"

#import "FileSystemItem.h"



@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    // Do any additional setup after loading the view.
}


- (void)setRepresentedObject:(id)representedObject {
    [super setRepresentedObject:representedObject];

    // Update the view, if already loaded.
}


//////////////
- (NSInteger)outlineView:(NSOutlineView *)outlineView numberOfChildrenOfItem:(id)item {
 
    return (item == nil) ? 1 : [item numberOfChildren];
}
 
 
- (BOOL)outlineView:(NSOutlineView *)outlineView isItemExpandable:(id)item {
    return (item == nil) ? YES : ([item numberOfChildren] != -1);
}
 
 
- (id)outlineView:(NSOutlineView *)outlineView child:(NSInteger)index ofItem:(id)item {
 
    return (item == nil) ? [FileSystemItem rootItem] : [(FileSystemItem *)item childAtIndex:index];
}
 
 
- (id)outlineView:(NSOutlineView *)outlineView objectValueForTableColumn:(NSTableColumn *)tableColumn byItem:(id)item {
    return (item == nil) ? @"/" : [item relativePath];
}
//////////////


@end
