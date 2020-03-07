//
//  ViewController.h
//  OutlineViewDataSource
//
//  Created by Rik Goossens on 07/03/2020.
//  Copyright © 2020 Rik Goossens. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ViewController : NSViewController {

IBOutlet NSOutlineView *_sidebarOutlineView;

}

// NOTE: See, IB really sucks. The text label was not neatly lined up with the disclosure triangle.
// (it was a bit too high).
// See: README.md screenshot
// See: https://developer.apple.com/design/human-interface-guidelines/macos/buttons/disclosure-controls/
// When we changed the outline view to View Based and back again to Cell Based things all of a
// sudden neatly lined up.
// But, sucks even more, now the row height has also become smaller (which is why it is lining up correctly, of course).
// Row Height went to 17. We can set it back to 24 (Default) but then things no longer line up.
// Must we really line up programmatically?
// NONO: we can use a combination of Row Height 16 and Cell Spacing Height 3 to get Finder-like rows,
// neatly lined up.


@end

