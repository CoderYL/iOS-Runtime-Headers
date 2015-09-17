/* Generated by RuntimeBrowser.
 */

@protocol UISearchBarDelegate <UIBarPositioningDelegate>

@optional

- (void)searchBar:(UISearchBar *)arg1 selectedScopeButtonIndexDidChange:(int)arg2;
- (BOOL)searchBar:(UISearchBar *)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(NSString *)arg3;
- (void)searchBar:(UISearchBar *)arg1 textDidChange:(NSString *)arg2;
- (void)searchBarBookmarkButtonClicked:(UISearchBar *)arg1;
- (void)searchBarCancelButtonClicked:(UISearchBar *)arg1;
- (void)searchBarResultsListButtonClicked:(UISearchBar *)arg1;
- (void)searchBarSearchButtonClicked:(UISearchBar *)arg1;
- (BOOL)searchBarShouldBeginEditing:(UISearchBar *)arg1;
- (BOOL)searchBarShouldEndEditing:(UISearchBar *)arg1;
- (void)searchBarTextDidBeginEditing:(UISearchBar *)arg1;
- (void)searchBarTextDidEndEditing:(UISearchBar *)arg1;

@end