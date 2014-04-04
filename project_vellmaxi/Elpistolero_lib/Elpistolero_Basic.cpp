//   Servo_ID =		step	{ 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}
int FSL[7][18]=	{	/*0*/	{235,788,279,744,462,561,358,666,513,522,342,681,241,781,646,377,513,522},
					/*1*/	{235,788,279,744,462,561,358,666,519,528,344,678,245,776,644,380,519,528},
					/*2*/	{235,788,279,744,462,561,358,666,524,533,346,675,250,770,642,383,524,533},
					/*3*/	{235,788,279,744,462,561,358,666,528,537,349,672,256,763,639,386,528,537},
					/*4*/	{235,788,279,744,462,561,358,666,521,544,352,679,262,778,636,379,531,541},
					/*5*/	{235,788,279,744,462,561,358,666,503,555,354,696,266,811,634,362,533,544},
					/*6*/	{235,788,279,744,462,561,358,666,494,560,355,703,268,826,633,355,534,546}	};
	
int FSL2[7][18]={	/*0*/	{233,786,279,744,462,561,358,666,503,555,353,725,267,807,641,386,533,544},
					/*1*/	{248,801,279,744,462,561,358,666,521,544,357,718,264,765,648,421,531,541},
					/*2*/	{263,816,279,744,462,561,358,666,528,537,355,713,259,744,652,437,528,537},
					/*3*/	{276,829,279,744,462,561,358,666,524,533,352,718,252,751,655,434,524,533},
					/*4*/	{287,840,279,744,462,561,358,666,519,528,353,720,248,760,660,427,519,528},
					/*5*/	{295,848,279,744,462,561,358,666,513,522,357,719,246,769,666,418,513,522},
					/*6*/	{301,854,279,744,462,561,358,666,507,516,364,716,248,775,671,409,507,516}	};

int FSR[7][18] ={	/*0*/	{235,788,279,744,462,561,358,666,501,510,342,681,242,782,646,377,501,510},
					/*1*/	{235,788,279,744,462,561,358,666,495,504,345,679,247,778,643,379,495,504},
					/*2*/	{235,788,279,744,462,561,358,666,490,499,348,677,253,773,640,381,490,499},
					/*3*/	{235,788,279,744,462,561,358,666,486,495,351,674,260,767,637,384,486,495},
					/*4*/	{235,788,279,744,462,561,358,666,479,502,344,671,245,761,644,387,482,492},
					/*5*/	{235,788,279,744,462,561,358,666,468,520,327,669,212,757,661,389,479,490},
					/*6*/	{235,788,279,744,462,561,358,666,463,529,320,668,197,755,668,390,477,489}	};
	
int FSR2[7][18]={	/*0*/	{236,789,279,744,462,561,358,666,468,520,298,670,216,756,637,382,479,490},
					/*1*/	{221,774,279,744,462,561,358,666,479,502,305,666,258,759,602,375,482,492},
					/*2*/	{206,759,279,744,462,561,358,666,486,495,310,668,279,764,586,371,486,495},
					/*3*/	{193,746,279,744,462,561,358,666,490,499,305,671,272,771,589,368,490,499},
					/*4*/	{182,735,279,744,462,561,358,666,495,504,303,670,263,775,596,363,495,504},
					/*5*/	{174,727,279,744,462,561,358,666,501,510,304,666,254,777,605,357,501,510},
					/*6*/	{168,721,279,744,462,561,358,666,507,516,307,659,248,775,614,352,507,516}	};
	
int FML[7][18]=	{	/*0*/	{169,722,279,744,462,561,358,666,513,522,302,660,246,769,621,348,513,522},
					/*1*/	{166,719,279,744,462,561,358,666,518,527,308,651,248,761,625,348,518,527},
					/*2*/	{167,720,279,744,462,561,358,666,519,533,314,650,252,761,628,346,523,532},
					/*3*/	{171,724,279,744,462,561,358,666,513,541,321,662,257,778,629,341,527,537},
					/*4*/	{179,732,279,744,462,561,358,666,504,550,327,682,262,801,630,338,530,541},
					/*5*/	{189,742,279,744,462,561,358,666,496,556,332,704,266,820,631,342,532,543},
					/*6*/	{201,754,279,744,462,561,358,666,493,558,335,724,267,827,633,354,533,544}	};

int FML2[7][18]={	/*0*/	{215,768,279,744,462,561,358,666,496,556,337,736,266,820,636,374,532,543},
					/*1*/	{230,783,279,744,462,561,358,666,504,550,338,740,262,801,641,396,530,541},
					/*2*/	{246,799,279,744,462,561,358,666,513,541,339,737,257,778,647,416,527,537},
					/*3*/	{260,813,279,744,462,561,358,666,519,533,340,732,252,761,654,428,523,532},
					/*4*/	{274,827,279,744,462,561,358,666,518,527,343,730,248,761,660,427,518,527},
					/*5*/	{285,838,279,744,462,561,358,666,513,522,347,730,246,769,666,418,513,522},
					/*6*/	{294,847,279,744,462,561,358,666,507,516,354,726,248,775,671,409,507,516}	};
								
int FMR[7][18]=	{	/*0*/	{300,853,279,744,462,561,358,666,501,510,363,721,254,777,675,402,501,510},
					/*1*/	{303,856,279,744,462,561,358,666,496,505,372,715,262,775,675,398,496,505},
					/*2*/	{302,855,279,744,462,561,358,666,490,504,373,709,262,771,677,395,491,500},
					/*3*/	{298,851,279,744,462,561,358,666,482,510,361,702,245,766,682,394,486,496},
					/*4*/	{290,843,279,744,462,561,358,666,473,519,341,696,222,761,685,393,482,493},
					/*5*/	{280,833,279,744,462,561,358,666,467,527,319,691,203,757,681,392,480,491},
					/*6*/	{268,821,279,744,462,561,358,666,465,530,299,688,196,756,669,390,479,490}	};

int FMR2[7][18]={	/*0*/	{254,807,279,744,462,561,358,666,467,527,287,686,203,757,649,387,480,491},
					/*1*/	{239,792,279,744,462,561,358,666,473,519,283,685,222,761,627,382,482,493},
					/*2*/	{223,776,279,744,462,561,358,666,482,510,286,684,245,766,607,376,486,496},
					/*3*/	{209,762,279,744,462,561,358,666,490,504,291,683,262,771,595,369,491,500},
					/*4*/	{195,748,279,744,462,561,358,666,496,505,293,680,262,775,596,363,496,505},
					/*5*/	{184,737,279,744,462,561,358,666,501,510,293,676,254,777,605,357,501,510},
					/*6*/	{175,728,279,744,462,561,358,666,507,516,297,669,248,775,614,352,507,516}	};
							
int FEL[7][18]=	{	/*0*/	{166,719,279,744,462,561,358,666,513,522,312,650,246,769,621,349,513,522},
					/*1*/	{168,721,279,744,462,561,358,666,519,528,318,641,248,760,625,348,519,528},
					/*2*/	{172,725,279,744,462,561,358,666,524,533,323,634,252,751,626,350,524,533},
					/*3*/	{180,733,279,744,462,561,358,666,528,537,326,631,259,744,623,355,528,537},
					/*4*/	{191,744,279,744,462,561,358,666,521,544,330,647,264,765,621,350,531,541},
					/*5*/	{204,757,279,744,462,561,358,666,503,555,337,682,267,807,625,343,533,544},
					/*6*/	{218,771,279,744,462,561,358,666,494,560,345,713,268,826,633,355,534,546},	};
	
int FEL2[7][18]={	/*0*/	{235,788,279,744,462,561,358,666,503,555,354,696,266,811,634,362,533,544},
					/*1*/	{235,788,279,744,462,561,358,666,521,544,352,679,262,778,636,379,531,541},
					/*2*/	{235,788,279,744,462,561,358,666,528,537,349,672,256,763,639,386,528,537},
					/*3*/	{235,788,279,744,462,561,358,666,524,533,346,675,250,770,642,383,524,533},
					/*4*/	{235,788,279,744,462,561,358,666,519,528,344,678,245,776,644,380,519,528},
					/*5*/	{235,788,279,744,462,561,358,666,513,522,342,681,241,781,646,377,513,522},
					/*6*/	{235,788,279,744,462,561,358,666,507,516,341,682,240,783,647,376,507,516},	};

int FER[7][18]=	{	/*0*/	{303,856,279,744,462,561,358,666,501,510,373,711,254,777,674,402,501,510},
					/*1*/	{301,854,279,744,462,561,358,666,495,504,382,705,263,775,675,398,495,504},
					/*2*/	{297,850,279,744,462,561,358,666,490,499,389,700,272,771,673,397,490,499},
					/*3*/	{289,842,279,744,462,561,358,666,486,495,392,697,279,764,668,400,486,495},
					/*4*/	{278,831,279,744,462,561,358,666,479,502,376,693,258,759,673,402,482,492},
					/*5*/	{265,818,279,744,462,561,358,666,468,520,341,686,216,756,680,398,479,490},
					/*6*/	{251,804,279,744,462,561,358,666,463,529,310,678,197,755,668,390,477,489}	};
					
int FER2[7][18]={	/*0*/	{235,788,279,744,462,561,358,666,468,520,327,669,212,757,661,389,479,490},
					/*1*/	{235,788,279,744,462,561,358,666,479,502,344,671,245,761,644,387,482,492},
					/*2*/	{235,788,279,744,462,561,358,666,486,495,351,674,260,767,637,384,486,495},
					/*3*/	{235,788,279,744,462,561,358,666,490,499,348,677,253,773,640,381,490,499},
					/*4*/	{235,788,279,744,462,561,358,666,495,504,345,679,247,778,643,379,495,504},
					/*5*/	{235,788,279,744,462,561,358,666,501,510,342,681,242,782,646,377,501,510},
					/*6*/	{235,788,279,744,462,561,358,666,507,516,341,682,240,783,647,376,507,516}	};

int RML[7][18]= {	/*0*/	{235,788,279,744,462,561,358,666,479,559,347,670,251,759,641,388,479,559},
					/*1*/	{235,788,279,744,462,561,358,666,487,566,346,664,250,747,642,394,487,566},
					/*2*/	{235,788,279,744,462,561,358,666,491,573,347,662,251,743,641,396,495,572},
					/*3*/	{235,788,279,744,462,561,358,666,489,581,348,668,254,756,640,390,503,576},
					/*4*/	{235,788,279,744,462,561,358,666,485,587,350,678,258,776,638,380,511,578},
					/*5*/	{235,788,279,744,462,561,358,666,482,590,352,688,262,795,636,370,519,577},
					/*6*/	{235,788,279,744,462,561,358,666,485,587,353,693,264,806,635,365,525,573}	};

int RML2[7][18]= {	/*0*/	{235,788,279,744,462,561,358,666,493,579,354,693,265,806,634,365,529,566},
					/*1*/	{235,788,279,744,462,561,358,666,506,567,352,689,262,798,636,369,532,557},
					/*2*/	{235,788,279,744,462,561,358,666,518,553,350,683,258,785,638,375,532,548},
					/*3*/	{235,788,279,744,462,561,358,666,525,540,347,678,251,775,641,380,529,539},
					/*4*/	{235,788,279,744,462,561,358,666,523,531,344,678,245,775,644,380,523,531},
					/*5*/	{235,788,279,744,462,561,358,666,515,524,342,680,241,780,646,378,515,524},
					/*6*/	{235,788,279,744,462,561,358,666,507,516,341,682,240,783,647,376,507,516}	};
					
int RMR[7][18]= {	/*0*/	{235,788,279,744,462,561,358,666,499,508,343,681,243,782,645,377,499,508},
					/*1*/	{235,788,279,744,462,561,358,666,492,500,345,679,248,778,643,379,492,500},
					/*2*/	{235,788,279,744,462,561,358,666,483,498,345,676,248,772,643,382,484,494},
					/*3*/	{235,788,279,744,462,561,358,666,470,505,340,673,238,765,648,385,475,491},
					/*4*/	{235,788,279,744,462,561,358,666,456,517,334,671,225,761,654,387,466,491},
					/*5*/	{235,788,279,744,462,561,358,666,444,530,330,669,217,758,658,389,457,494},
					/*6*/	{235,788,279,744,462,561,358,666,436,538,330,670,217,759,658,388,450,498}	};

int RMR2[7][18]= {	/*0*/	{235,788,279,744,462,561,358,666,433,541,335,671,228,761,653,387,446,504},
					/*1*/	{235,788,279,744,462,561,358,666,436,538,345,673,247,765,643,385,445,512},
					/*2*/	{235,788,279,744,462,561,358,666,442,534,355,675,267,769,633,383,447,520},
					/*3*/	{235,788,279,744,462,561,358,666,450,532,361,676,280,772,627,382,451,528},
					/*4*/	{235,788,279,744,462,561,358,666,457,536,359,677,276,773,629,381,457,536},
					/*5*/	{235,788,279,744,462,561,358,666,464,544,353,676,264,772,635,382,464,544},
					/*6*/	{235,788,279,744,462,561,358,666,472,551,349,674,256,767,639,384,472,551}	};

int LML[7][18]= {	/*0*/	{235,788,279,744,462,561,358,666,515,524,342,680,241,780,646,378,515,524},
					/*1*/	{235,788,279,744,462,561,358,666,523,531,344,678,245,775,644,380,523,531},
					/*2*/	{235,788,279,744,462,561,358,666,525,540,347,678,251,775,641,380,529,539},
					/*3*/	{235,788,279,744,462,561,358,666,518,553,350,683,258,785,638,375,532,548},
					/*4*/	{235,788,279,744,462,561,358,666,506,567,352,689,262,798,636,369,532,557},
					/*5*/	{235,788,279,744,462,561,358,666,493,579,354,693,265,806,634,365,529,566},
					/*6*/	{235,788,279,744,462,561,358,666,485,587,353,693,264,806,635,365,525,573}	};

int LML2[7][18]= {	/*0*/	{235,788,279,744,462,561,358,666,482,590,352,688,262,795,636,370,519,577},
					/*1*/	{235,788,279,744,462,561,358,666,485,587,350,678,258,776,638,380,511,578},
					/*2*/	{235,788,279,744,462,561,358,666,489,581,348,668,254,756,640,390,503,576},
					/*3*/	{235,788,279,744,462,561,358,666,491,573,347,662,251,743,641,396,495,572},
					/*4*/	{235,788,279,744,462,561,358,666,487,566,346,664,250,747,642,394,487,566},
					/*5*/	{235,788,279,744,462,561,358,666,479,559,347,670,251,759,641,388,479,559},
					/*6*/	{235,788,279,744,462,561,358,666,472,551,349,674,256,767,639,384,472,551}	};

int LMR[7][18]= {	/*0*/	{235,788,279,744,462,561,358,666,464,544,353,676,264,772,635,382,464,544},
					/*1*/	{235,788,279,744,462,561,358,666,457,536,359,677,276,773,629,381,457,536},
					/*2*/	{235,788,279,744,462,561,358,666,450,532,361,676,280,772,627,382,451,528},
					/*3*/	{235,788,279,744,462,561,358,666,442,534,355,675,267,769,633,383,447,520},
					/*4*/	{235,788,279,744,462,561,358,666,436,538,345,673,247,765,643,385,445,512},
					/*5*/	{235,788,279,744,462,561,358,666,433,541,335,671,228,761,653,387,446,504},
					/*6*/	{235,788,279,744,462,561,358,666,436,538,330,670,217,759,658,388,450,498}	};

int LMR2[7][18]= {	/*0*/	{235,788,279,744,462,561,358,666,444,530,330,669,217,758,658,389,457,494},
					/*1*/	{235,788,279,744,462,561,358,666,456,517,334,671,225,761,654,387,466,491},
					/*2*/	{235,788,279,744,462,561,358,666,470,505,340,673,238,765,648,385,475,491},
					/*3*/	{235,788,279,744,462,561,358,666,483,498,345,676,248,772,643,382,484,494},
					/*4*/	{235,788,279,744,462,561,358,666,492,500,345,679,248,778,643,379,492,500},
					/*5*/	{235,788,279,744,462,561,358,666,499,508,343,681,243,782,645,377,499,508},
					/*6*/	{235,788,279,744,462,561,358,666,507,516,341,682,240,783,647,376,507,516}	};
					
int LTML[7][18]= {	/*0*/	{235,788,279,744,462,561,358,666,514,522,342,681,241,781,646,377,514,522},
					/*1*/	{235,788,279,744,462,561,358,666,520,528,344,678,245,776,644,380,520,528},
					/*2*/	{235,788,279,744,462,561,359,664,521,535,347,679,250,777,642,379,525,534},
					/*3*/	{235,788,279,744,462,561,363,660,516,544,350,686,257,790,639,373,529,539},
					/*4*/	{235,788,279,744,462,561,370,653,506,552,354,696,263,807,637,366,533,543},
					/*5*/	{235,788,279,744,462,561,379,644,498,559,357,704,267,821,636,361,535,546},
					/*6*/	{235,788,279,744,462,561,388,635,495,561,359,709,269,826,636,361,535,547}	};
					
int LTML2[7][18]= {	/*0*/	{235,788,279,744,462,561,398,625,498,558,360,708,267,821,638,365,534,546},
					/*1*/	{235,788,279,744,462,561,406,617,506,551,358,702,263,807,641,372,532,542},
					/*2*/	{235,788,279,744,462,561,413,610,515,543,355,693,257,790,643,380,529,538},
					/*3*/	{235,788,279,744,462,561,417,606,521,534,350,686,250,777,646,386,524,533},
					/*4*/	{235,788,279,744,462,561,419,604,519,527,346,683,245,776,647,385,519,527},
					/*5*/	{235,788,279,744,462,561,419,604,513,522,343,684,241,781,647,381,513,522},
					/*6*/	{235,788,279,744,462,561,419,604,507,516,340,683,240,783,645,378,507,516}	};
					
int LTMR[7][18]= {	/*0*/	{235,788,279,744,462,561,419,604,501,510,339,680,242,782,642,376,501,510},
					/*1*/	{235,788,279,744,462,561,419,604,496,504,340,677,247,778,638,376,496,504},
					/*2*/	{235,788,279,744,462,561,417,606,489,502,337,673,246,773,637,377,490,499},
					/*3*/	{235,788,279,744,462,561,413,610,480,508,330,668,233,766,643,380,485,494},
					/*4*/	{235,788,279,744,462,561,406,617,472,517,321,665,216,760,651,382,481,491},
					/*5*/	{235,788,279,744,462,561,398,625,465,525,315,663,202,756,658,385,477,489},
					/*6*/	{235,788,279,744,462,561,388,635,462,528,314,664,197,754,662,387,476,488}	};
					
int LTMR2[7][18]= {	/*0*/	{235,788,279,744,462,561,379,644,464,525,319,666,202,756,662,387,477,488},
					/*1*/	{235,788,279,744,462,561,370,653,471,517,327,669,216,760,657,386,480,490},
					/*2*/	{235,788,279,744,462,561,363,660,479,507,337,673,233,766,650,384,484,494},
					/*3*/	{235,788,279,744,462,561,359,664,488,502,344,676,246,773,644,381,489,498},
					/*4*/	{235,788,279,744,462,561,358,666,495,503,345,679,247,778,643,379,495,503},
					/*5*/	{235,788,279,744,462,561,358,666,501,509,342,681,242,782,646,377,501,509},
					/*6*/	{235,788,279,744,462,561,358,666,507,516,341,682,240,783,647,376,507,516}	};
					
int RTML[7][18]= {	/*0*/	{235,788,279,744,462,561,419,604,513,522,343,684,241,781,647,381,513,522},
					/*1*/	{235,788,279,744,462,561,419,604,519,527,346,683,245,776,647,385,519,527},
					/*2*/	{235,788,279,744,462,561,417,606,521,534,350,686,250,777,646,386,524,533},
					/*3*/	{235,788,279,744,462,561,413,610,515,543,355,693,257,790,643,380,529,538},
					/*4*/	{235,788,279,744,462,561,406,617,506,551,358,702,263,807,641,372,532,542},
					/*5*/	{235,788,279,744,462,561,398,625,498,558,360,708,267,821,638,365,534,546},
					/*6*/	{235,788,279,744,462,561,388,635,495,561,359,709,269,826,636,361,535,547}	};
					
int RTML2[7][18]= {	/*0*/	{235,788,279,744,462,561,379,644,498,559,357,704,267,821,636,361,535,546},
					/*1*/	{235,788,279,744,462,561,370,653,506,552,354,696,263,807,637,366,533,543},
					/*2*/	{235,788,279,744,462,561,363,660,516,544,350,686,257,790,639,373,529,539},
					/*3*/	{235,788,279,744,462,561,359,664,521,535,347,679,250,777,642,379,525,534},
					/*4*/	{235,788,279,744,462,561,358,666,520,528,344,678,245,776,644,380,520,528},
					/*5*/	{235,788,279,744,462,561,358,666,514,522,342,681,241,781,646,377,514,522},
					/*6*/	{235,788,279,744,462,561,358,666,507,516,341,682,240,783,647,376,507,516}	};

int RTMR[7][18]= {	/*0*/	{235,788,279,744,462,561,358,666,501,509,342,681,242,782,646,377,501,509},
					/*1*/	{235,788,279,744,462,561,358,666,495,503,345,679,247,778,643,379,495,503},
					/*2*/	{235,788,279,744,462,561,359,664,488,502,344,676,246,773,644,381,489,498},
					/*3*/	{235,788,279,744,462,561,363,660,479,507,337,673,233,766,650,384,484,494},
					/*4*/	{235,788,279,744,462,561,370,653,471,517,327,669,216,760,657,386,480,490},
					/*5*/	{235,788,279,744,462,561,379,644,464,525,319,666,202,756,662,387,477,488},
					/*6*/	{235,788,279,744,462,561,388,635,462,528,314,664,197,754,662,387,476,488}	};
					
int RTMR2[7][18]= {	/*0*/	{235,788,279,744,462,561,398,625,465,525,315,663,202,756,658,385,477,489},
					/*1*/	{235,788,279,744,462,561,406,617,472,517,321,665,216,760,651,382,481,491},
					/*2*/	{235,788,279,744,462,561,413,610,480,508,330,668,233,766,643,380,485,494},
					/*3*/	{235,788,279,744,462,561,417,606,489,502,337,673,246,773,637,377,490,499},
					/*4*/	{235,788,279,744,462,561,419,604,496,504,340,677,247,778,638,376,496,504},
					/*5*/	{235,788,279,744,462,561,419,604,501,510,339,680,242,782,642,376,501,510},
					/*6*/	{235,788,279,744,462,561,419,604,507,516,340,683,240,783,645,378,507,516}	};
					
int LKICK[6][18]= {	/*0*/	{235,788,279,744,462,561,354,665,541,582,350,665,287,722,624,403,571,581},
					/*1*/	{235,788,279,744,462,561,354,669,522,602,350,773,287,936,624,299,572,583},
					/*2*/	{235,788,279,744,462,561,354,669,522,602,400,803,287,516,624,601,572,583},
					/*3*/	{235,788,279,744,462,561,354,669,522,602,350,773,287,936,624,299,572,583},
					/*4*/	{235,788,279,744,462,561,354,665,541,582,350,665,287,722,624,403,571,581},
					/*5*/	{235,788,279,744,462,561,358,666,507,516,341,682,240,783,647,376,507,516}	};

int RKICK[6][18]= {	/*0*/	{235,788,279,744,462,561,358,669,441,482,358,673,301,736,620,399,442,447},
					/*1*/	{235,788,279,744,462,561,354,669,421,511,250,673,87,736,724,399,440,446},
					/*2*/	{235,788,279,744,462,561,354,669,421,511,220,623,507,736,422,399,440,446},
					/*3*/	{235,788,279,744,462,561,354,669,421,511,250,673,87,736,724,399,440,446},
					/*4*/	{235,788,279,744,462,561,358,669,441,492,358,673,301,736,620,399,442,447},
					/*5*/	{235,788,279,744,462,561,358,666,507,516,341,682,240,783,647,376,507,516}	};


int SIT_DOWN[18]= {	/*0*/	 182,841,294,729,490,533,353,670,508,515,268,755,71,952,753,270,508,515	};


void jalan (int delayKu, int loop) //input pengulangan jalan
{				//delayKu = 0.08
		//printf("First Step Left");
		for ( int Xid = 0; Xid < 7 ; Xid++)
		{
		for (int Yid = 0; Yid < 18; Yid++)
		{	dxl_write_word( Yid+1, P_GOAL_POSITION_L, FSL[Xid][Yid]);}
		usleep(delayKu);
		}

        //printf("First Step Left 2");
		for ( int Xid = 0; Xid < 7 ; Xid++)
        {
        for (int Yid = 0; Yid < 18; Yid++)
        {       dxl_write_word( Yid+1, P_GOAL_POSITION_L, FSL2[Xid][Yid]);}
        usleep(delayKu);
        }
        
        for (int ulang = 0;ulang < loop;ulang++)
        {
			printf("First Middle Right");
            for ( int Xid = 0; Xid < 7; Xid++)
            {
            for (int Yid = 0; Yid < 18; Yid++)
            {       dxl_write_word( Yid+1, P_GOAL_POSITION_L, FMR[Xid][Yid]);}
            usleep(delayKu);
            }

            printf("First Middle Right 2");
            for ( int Xid = 0; Xid < 7 ; Xid++)
            {
            for (int Yid = 0; Yid < 18; Yid++)
            {       dxl_write_word( Yid+1, P_GOAL_POSITION_L, FMR2[Xid][Yid]);}
            usleep(delayKu);
            }

            printf("First Middle Left");
            for ( int Xid = 0; Xid < 7 ; Xid++)
            {
            for (int Yid = 0; Yid < 18; Yid++)
            {       dxl_write_word( Yid+1, P_GOAL_POSITION_L, FML[Xid][Yid]);}
            usleep(delayKu);
            }

            printf("First Middle Left 2");
            for ( int Xid = 0; Xid < 7 ; Xid++)
            {
            for (int Yid = 0; Yid < 18; Yid++)
            {       dxl_write_word( Yid+1, P_GOAL_POSITION_L, FML2[Xid][Yid]);}
            usleep(delayKu);
		}
	}
		//end
		    printf("First End R");
            for ( int Xid = 0; Xid < 7 ; Xid++)
            {
            for (int Yid = 0; Yid < 18; Yid++)
            {       dxl_write_word( Yid+1, P_GOAL_POSITION_L, FER[Xid][Yid]);}
            usleep(delayKu);
            }

            printf("First End R 2");
            for ( int Xid = 0; Xid < 7 ; Xid++)
            {
            for (int Yid = 0; Yid < 18; Yid++)
            {       dxl_write_word( Yid+1, P_GOAL_POSITION_L, FER2[Xid][Yid]);}
            usleep(delayKu);}}

void geser_kanan(int delayKu)
{ //delayKu=0.08
	for (int Xid=0; Xid<7; Xid++)
	{
		for (int Yid=0; Yid<18; Yid++)
		{			dxl_write_word(Yid+1, P_GOAL_POSITION_L, RML[Xid][Yid]);}
	}
	usleep (delayKu);
	for (int Xid=0; Xid<7; Xid++)
	{
		for (int Yid=0; Yid<18; Yid++)
		{			dxl_write_word(Yid+1, P_GOAL_POSITION_L, RML2[Xid][Yid]);}
	}
	usleep (delayKu);
	for (int Xid=0; Xid<7; Xid++)
	{
		for (int Yid=0; Yid<18; Yid++)
		{			dxl_write_word(Yid+1, P_GOAL_POSITION_L, RMR[Xid][Yid]);}
	}
	usleep (delayKu);
	for (int Xid=0; Xid<7; Xid++)
	{
	for (int Yid=0; Yid<18; Yid++)
	{			dxl_write_word(Yid+1, P_GOAL_POSITION_L, RMR2[Xid][Yid]);}
}
usleep (delayKu);
}

void geser_kiri(int delayKu)
{ //delayKu=0.08
	for (int Xid=0; Xid<7; Xid++)
	{
		for (int Yid=0; Yid<18; Yid++)
		{			dxl_write_word(Yid+1, P_GOAL_POSITION_L, LML[Xid][Yid]);}
	}
	usleep (delayKu);
	for (int Xid=0; Xid<7; Xid++)
	{
		for (int Yid=0; Yid<18; Yid++)
		{			dxl_write_word(Yid+1, P_GOAL_POSITION_L, LML2[Xid][Yid]);}
	}
	usleep (delayKu);
	for (int Xid=0; Xid<7; Xid++)
	{
		for (int Yid=0; Yid<18; Yid++)
		{			dxl_write_word(Yid+1, P_GOAL_POSITION_L, LMR[Xid][Yid]);}
	}
	usleep (delayKu);
	for (int Xid=0; Xid<7; Xid++)
	{
		for (int Yid=0; Yid<18; Yid++)
		{			dxl_write_word(Yid+1, P_GOAL_POSITION_L, LMR2[Xid][Yid]);}
	}
	usleep (delayKu);
}

void putar_kanan(int delayKu)
{ //delayKu = 0.08
	for (int Xid=0; Xid<7; Xid++)
	{
		for (int Yid=0; Yid<18; Yid++)
		{			dxl_write_word(Yid+1, P_GOAL_POSITION_L,RTML[Xid][Yid]);}
	}
		usleep (delayKu);
	for (int Xid=0; Xid<7; Xid++)
	{
		for (int Yid=0; Yid<18; Yid++)
		{			dxl_write_word(Yid+1, P_GOAL_POSITION_L,RTML2[Xid][Yid]);}
	}
		usleep (delayKu);
	for (int Xid=0; Xid<7; Xid++)
	{
		for (int Yid=0; Yid<18; Yid++)
		{			dxl_write_word(Yid+1, P_GOAL_POSITION_L,RTMR[Xid][Yid]);}
	}
		usleep (delayKu);
	
	for (int Xid=0; Xid<7; Xid++)
	{
		for (int Yid=0; Yid<18; Yid++)
		{			dxl_write_word(Yid+1, P_GOAL_POSITION_L,RTMR2[Xid][Yid]);}
	}
		usleep (delayKu);
}

void putar_kiri(int delayKu)
{ //delayKu = 0.08
	for (int Xid=0; Xid<7; Xid++)
	{
		for (int Yid=0; Yid<18; Yid++)
		{			dxl_write_word(Yid+1, P_GOAL_POSITION_L,LTML[Xid][Yid]);}
	}
	usleep (delayKu);
	for (int Xid=0; Xid<7; Xid++)
	{
		for (int Yid=0; Yid<18; Yid++)
		{			dxl_write_word(Yid+1, P_GOAL_POSITION_L,LTML2[Xid][Yid]);}
	}
	usleep (delayKu);
	for (int Xid=0; Xid<7; Xid++)
	{
		for (int Yid=0; Yid<18; Yid++)
		{			dxl_write_word(Yid+1, P_GOAL_POSITION_L,LTMR[Xid][Yid]);}
	}
	usleep (delayKu);
	for (int Xid=0; Xid<7; Xid++)
	{
		for (int Yid=0; Yid<18; Yid++)
		{			dxl_write_word(Yid+1, P_GOAL_POSITION_L,LTMR2[Xid][Yid]);}
	}
	usleep (delayKu);
}

void duduk()
{
	for (int Xid=0; Xid<18; Xid++)
	{dxl_write_word(Xid, P_GOAL_POSITION_L,SIT_DOWN[Xid]);}
}

void scan ()
{
        int serX=512;
        int serY=390;
        int statX,statY,ii,dcs,temp=0, plus;
	bool s;
        while(1){
        dxl_write_word( 31, 32, 150);
        dxl_write_word( 32, 32, 150);
        if (statX==0 && statY==0) statX=10;
        if (ii<7)
        {
	if (ii>2) {plus=60;} else {plus=0;} 
	serX=serX+statX;
        if (serX<362-plus) {serX=362-plus; statX=statX*-1; ii=ii+1;
        if (statX>0) {serY=430+(plus/2); statY=0;} else {serY=300-(plus/4); statY=0;}}

        else if (serX>662+plus) {serX=662+plus; statX=statX*-1; ii=ii+1;
        if (statX<0) {serY=300-(plus/2); statY=0;} else {serY=430+(plus/4); statY=0;}} s=false;}

        else {serX=512; serY= 390; ii=0; dcs=2; statY =0; statX=10; s=true;}
//        if (temp==11 || temp==21 || temp==31)

        serY=serY+statY;
        if (serY>510) {serY=510; statY=statY*-1; ii=ii+1; if (statX==0) ii=ii+1;} else
        if (serY<260) {serY=280; statY=statY*-1;ii=ii+1; if (statX==0) ii=ii+1;}

        dxl_write_word( 32, P_GOAL_POSITION_L, serY);
        dxl_write_word( 31, P_GOAL_POSITION_L, serX);
        usleep (10000);
	if (s) usleep (1000000); //ini tar bisa diganti sama hadap kiri/kanan
}
}