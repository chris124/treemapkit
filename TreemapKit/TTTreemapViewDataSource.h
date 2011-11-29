//
//  TTTreemapViewDataSource.h
//  PhotoStream
//
//  Created by Christopher White on 11/28/11.
//  Copyright (c) 2011 Mad Races, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

// Network
#import "Three20Network/TTModel.h"

// TreemapView
#import "TreemapView.h"

@protocol TTTreemapViewDataSource <TreemapViewDataSource, TTModel>

/**
 * Optional method to return a model object to delegate the TTModel protocol to.
 */
@property (nonatomic, retain) id<TTModel> model;

/*
+ (NSArray*)lettersForSectionsWithSearch:(BOOL)search summary:(BOOL)summary;

- (id)tableView:(UITableView*)tableView objectForRowAtIndexPath:(NSIndexPath*)indexPath;

- (Class)tableView:(UITableView*)tableView cellClassForObject:(id)object;

- (NSString*)tableView:(UITableView*)tableView labelForObject:(id)object;

- (NSIndexPath*)tableView:(UITableView*)tableView indexPathForObject:(id)object;

- (void)tableView:(UITableView*)tableView cell:(UITableViewCell*)cell
willAppearAtIndexPath:(NSIndexPath*)indexPath;
*/
 
/**
 * Informs the data source that its model loaded.
 *
 * That would be a good time to prepare the freshly loaded data for use in the table view.
 */
- (void)treemapViewDidLoadModel:(TreemapView*)treemapView;

- (NSString*)titleForLoading:(BOOL)reloading;

- (UIImage*)imageForEmpty;

- (NSString*)titleForEmpty;

- (NSString*)subtitleForEmpty;

- (UIImage*)imageForError:(NSError*)error;

- (NSString*)titleForError:(NSError*)error;

- (NSString*)subtitleForError:(NSError*)error;

@optional

/*
- (NSIndexPath*)tableView:(UITableView*)tableView willUpdateObject:(id)object
              atIndexPath:(NSIndexPath*)indexPath;

- (NSIndexPath*)tableView:(UITableView*)tableView willInsertObject:(id)object
              atIndexPath:(NSIndexPath*)indexPath;

- (NSIndexPath*)tableView:(UITableView*)tableView willRemoveObject:(id)object
              atIndexPath:(NSIndexPath*)indexPath;

- (void)search:(NSString*)text;
*/
 
@end

///////////////////////////////////////////////////////////////////////////////////////////////////

@interface TTTreemapViewDataSource : NSObject <TTTreemapViewDataSource> {
    id<TTModel> _model;
}

@end
