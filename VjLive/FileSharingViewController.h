//
//  FileSharingViewController.h
//  VjLive
//
//  Created by Alessandro Belli on 10/08/13.
//  Copyright (c) 2013 Alessandro Belli. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import "VideoCell.h"
#import "FlatUIKit.h"

@class ViewController;
@protocol PopOverSelectionDelegate;
@protocol PopOverSelectionDelegate
@optional

- (void)popOverItemSelected:(NSURL *)selectedItem titoloItem:(NSString*)titoloItem;

@end

@interface FileSharingViewController : UIViewController<MPMediaPickerControllerDelegate,UITableViewDelegate,UITableViewDataSource>{
    id                              myDelegate;
    NSString *fullpath;
    NSString *finalfullpath;

}
@property (strong,nonatomic) NSArray *items;
@property (strong,nonatomic) NSURL *url;
@property (nonatomic,weak) id <PopOverSelectionDelegate> delegate;

@property (weak, nonatomic) IBOutlet UITableView *primaTabella;
@property (weak, nonatomic) IBOutlet UITableView *secondaTabella;
@end