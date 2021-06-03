//
//  ViewController.m
//  LPSPDFDemo
//
//  Created by Pituk Kaewsuksai on 3/6/21.
//

#import "ViewController.h"
#import <LPSPDFReader/LPSPDFReader.h>
#import <LPSPDFReader/PDFReaderViewController.h>
#import <LPSPDFReader/LPSPDFReaderViewController.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
   
}

- (IBAction)openPDFTouched:(id)sender {
    NSBundle *bundle = [NSBundle bundleForClass:[LPSPDFReader class]];
    UIStoryboard *story = [UIStoryboard storyboardWithName:@"Main" bundle:bundle];
    UIViewController *vc = [story instantiateViewControllerWithIdentifier:@"PDFReaderViewController"];
    [self presentViewController:vc animated:YES completion:nil];
}

@end
