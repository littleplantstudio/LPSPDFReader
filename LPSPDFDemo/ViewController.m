//
//  ViewController.m
//  LPSPDFDemo
//
//  Created by Pituk Kaewsuksai on 3/6/21.
//

#import "ViewController.h"
#import <LPSPDFReader/PDFReaderViewController.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (IBAction)openPDFTouched:(id)sender {
    UIStoryboard *story = [UIStoryboard storyboardWithName:@"Main" bundle:[NSBundle bundleWithIdentifier:@"LPSPDFReader"]];
    UIViewController *vc = [story instantiateViewControllerWithIdentifier:@"LPSPDFReaderVC"];
    [self.navigationController pushViewController:vc animated:YES];
}

@end
