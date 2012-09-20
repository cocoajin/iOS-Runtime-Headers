/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UITableView;

@interface PSMovableListController : PSViewController <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_tableView;
    struct __CFArray { } *_ordering;
    struct __CFSet { } *_disabledDomains;
    BOOL _isDirty;
}


- (struct __CFString { }*)defaultDomain;
- (void)_updateCell:(id)arg1 forDomain:(int)arg2;
- (int)domainForIndexRow:(unsigned int)arg1;
- (id)stringForDomain:(int)arg1;
- (void)_saveIfNecessary;
- (id)displayNameForExtendedDomain:(int)arg1;
- (id)keyForDomain:(int)arg1;
- (void)_loadEnabledState;
- (void)_loadOrdering;
- (struct __CFString { }*)disabledKey;
- (void)removeUnwantedDomains;
- (void)defaultOrdering;
- (int)domainCount;
- (int)domainForKey:(id)arg1;
- (id)allDomainKeys;
- (struct __CFString { }*)reorderingKey;
- (void)dealloc;
- (id)init;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end