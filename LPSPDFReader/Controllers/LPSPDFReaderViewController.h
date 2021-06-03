//
//  LPSPDFReaderViewController.h
//  LPSPDFReader
//
//  Created by Pituk Kaewsuksai on 3/6/21.
//

#import <UIKit/UIKit.h>
#import <PDFKit/PDFKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LPSPDFReaderViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>

@property (weak, nonatomic) IBOutlet UILabel *pdfTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *pageNumberLabel;
@property (weak, nonatomic) IBOutlet UIView *pdfContainerView;
@property (weak, nonatomic) IBOutlet UIToolbar *topToolbar;
@property (weak, nonatomic) IBOutlet UIView *bottomThumbnailView;
@property (weak, nonatomic) IBOutlet UICollectionView *pdfThumbnailCollectionView;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *pageModeButton;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *topToolbarHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *bottomThumbnailViewHeightConstraint;

@property (strong, nonatomic) NSString *documentName;
@property (strong, nonatomic) PDFView *pdfView;
@property (strong, nonatomic) PDFDocument *pdfDocument;
@property (nonatomic, assign) BOOL twoPageMode;

- (void)preparePDFViewWithPageMode:(PDFDisplayMode) displayMode;

-(void)toggleTopBottomView;
-(void)didSelectPdfOutline:(PDFOutline *)pdfOutline;
-(void)didSelectPdfPageFromBookmark:(PDFPage *)pdfPage;
-(void)didSelectPdfSelection:(PDFSelection *)pdfSelection;


- (IBAction)outlineAction:(id)sender;
- (IBAction)pageModeAction:(id)sender;
- (IBAction)bookmarkAction:(id)sender;
- (IBAction)searchAction:(id)sender;

@end

NS_ASSUME_NONNULL_END
