#ifndef MTCONNECT_IDS_H
#define MTCONNECT_IDS_H

#include <map>
#include <string>
 
#define MT_ASCALESUBCLASSTYPE		2488
#define MT_ABSOLUTESUBCLASSTYPE		2478
#define MT_ACCELERATIONCLASSTYPE		2265
#define MT_ACCUMULATEDTIMECLASSTYPE		2267
#define MT_ACTIONSUBCLASSTYPE		2482
#define MT_ACTIVESTATEDATATYPE		2197
#define MT_ACTIVESTATEDATATYPE_ENUMSTRINGS		2197
#define MT_ACTUALSUBCLASSTYPE		2480
#define MT_ACTUATORCLASSTYPE		2411
#define MT_ACTUATORSTATECLASSTYPE		2146
#define MT_ACTUATORTYPE		2074
#define MT_ALLSUBCLASSTYPE		2484
#define MT_ALTERNATINGSUBCLASSTYPE		2486
#define MT_AMPERAGECLASSTYPE		2273
#define MT_ANGLECLASSTYPE		2275
#define MT_ANGULARACCELERATIONCLASSTYPE		2269
#define MT_ANGULARVELOCITYCLASSTYPE		2271
#define MT_ASSETCHANGEDCLASSTYPE		2405
#define MT_ASSETEVENTDATATYPE		2618
#define MT_ASSETREMOVEDCLASSTYPE		2407
#define MT_AUXILIARIESTYPE		2076
#define MT_AUXILIARYSUBCLASSTYPE		2490
#define MT_AVAILABILITYCLASSTYPE		2149
#define MT_AVAILABILITYDATATYPE		2198
#define MT_AVAILABILITYDATATYPE_ENUMSTRINGS		2198
#define MT_AXESTYPE		2078
#define MT_AXISCOUPLINGCLASSTYPE		2152
#define MT_AXISCOUPLINGDATATYPE		2199
#define MT_AXISCOUPLINGDATATYPE_ENUMSTRINGS		2199
#define MT_AXISFEEDRATECLASSTYPE		2277
#define MT_AXISFEEDRATEOVERRIDECLASSTYPE		2347
#define MT_AXISINTERLOCKCLASSTYPE		2155
#define MT_AXISSTATECLASSTYPE		2158
#define MT_AXISSTATEDATATYPE		2200
#define MT_AXISSTATEDATATYPE_ENUMSTRINGS		2200
#define MT_BSCALESUBCLASSTYPE		2496
#define MT_BADSUBCLASSTYPE		2492
#define MT_BARFEEDERINTERFACETYPE		2080
#define MT_BARFEEDERTYPE		2082
#define MT_BLOCKCLASSTYPE		2363
#define MT_BLOCKCOUNTCLASSTYPE		2349
#define MT_BRINELLSUBCLASSTYPE		2494
#define MT_CSCALESUBCLASSTYPE		2504
#define MT_CHUCKINTERFACETYPE		2084
#define MT_CHUCKINTERLOCKCLASSTYPE		2161
#define MT_CHUCKSTATECLASSTYPE		2164
#define MT_CHUCKTYPE		2086
#define MT_CLOCKTIMECLASSTYPE		2279
#define MT_CLOSECHUCKCLASSTYPE		2256
#define MT_CLOSEDOORCLASSTYPE		2250
#define MT_COMMANDEDSUBCLASSTYPE		2498
#define MT_COMMUNICATIONSCLASSTYPE		2413
#define MT_COMPOSITIONSTATECLASSTYPE		2173
#define MT_COMPOSITIONSTATEDATATYPE		2202
#define MT_COMPOSITIONSTATEDATATYPE_ENUMSTRINGS		2202
#define MT_CONCENTRATIONCLASSTYPE		2281
#define MT_CONDUCTIVITYCLASSTYPE		2283
#define MT_CONTROLSUBCLASSTYPE		2502
#define MT_CONTROLLERMODECLASSTYPE		2167
#define MT_CONTROLLERMODEDATATYPE		2203
#define MT_CONTROLLERMODEDATATYPE_ENUMSTRINGS		2203
#define MT_CONTROLLERMODEOVERRIDECLASSTYPE		2176
#define MT_CONTROLLERTYPE		2088
#define MT_COOLANTTYPE		2090
#define MT_COUPLEDAXESCLASSTYPE		2365
#define MT_DSCALESUBCLASSTYPE		2512
#define MT_DATARANGECLASSTYPE		2415
#define MT_DELAYSUBCLASSTYPE		2506
#define MT_DIELECTRICTYPE		2092
#define MT_DIRECTSUBCLASSTYPE		2508
#define MT_DIRECTIONCLASSTYPE		2179
#define MT_DIRECTIONDATATYPE		2205
#define MT_DIRECTIONDATATYPE_ENUMSTRINGS		2205
#define MT_DISPLACEMENTCLASSTYPE		2285
#define MT_DOORINTERFACETYPE		2094
#define MT_DOORSTATECLASSTYPE		2182
#define MT_DOORTYPE		2096
#define MT_DRYRUNSUBCLASSTYPE		2510
#define MT_ELECTRICTYPE		2098
#define MT_ELECTRICALENERGYCLASSTYPE		2287
#define MT_EMERGENCYSTOPCLASSTYPE		2185
#define MT_EMERGENCYSTOPDATATYPE		2207
#define MT_EMERGENCYSTOPDATATYPE_ENUMSTRINGS		2207
#define MT_ENCLOSURETYPE		2100
#define MT_ENDOFBARCLASSTYPE		2188
#define MT_ENVIRONMENTALTYPE		2102
#define MT_EQUIPMENTMODECLASSTYPE		2191
#define MT_EQUIPMENTTIMERCLASSTYPE		2289
#define MT_EXECUTIONCLASSTYPE		2170
#define MT_EXECUTIONDATATYPE		2262
#define MT_EXECUTIONDATATYPE_ENUMSTRINGS		2262
#define MT_FEEDERTYPE		2104
#define MT_FILLLEVELCLASSTYPE		2291
#define MT_FIXTURESUBCLASSTYPE		2514
#define MT_FLOWCLASSTYPE		2293
#define MT_FREQUENCYCLASSTYPE		2295
#define MT_FUNCTIONALMODECLASSTYPE		2194
#define MT_FUNCTIONALMODEDATATYPE		2208
#define MT_FUNCTIONALMODEDATATYPE_ENUMSTRINGS		2208
#define MT_GOODSUBCLASSTYPE		2500
#define MT_HARDNESSCLASSTYPE		2351
#define MT_HARDWARECLASSTYPE		2419
#define MT_HASMTCLASSTYPE		2680
#define MT_HASMTCOMPOSITION		2687
#define MT_HASMTREFERENCE		2672
#define MT_HASMTSOURCE		2689
#define MT_HASMTSUBCLASSTYPE		2683
#define MT_HYDRAULICTYPE		2106
#define MT_INCREMENTALSUBCLASSTYPE		2516
#define MT_INTERFACESTATECLASSTYPE		2227
#define MT_INTERFACESTATEDATATYPE		2234
#define MT_INTERFACESTATEDATATYPE_ENUMSTRINGS		2234
#define MT_INTERFACESTATUSDATATYPE		2230
#define MT_INTERFACESTATUSDATATYPE_ENUMSTRINGS		2230
#define MT_INTERFACESTYPE		2108
#define MT_JOBSUBCLASSTYPE		2518
#define MT_KINETICSUBCLASSTYPE		2520
#define MT_LATERALSUBCLASSTYPE		2522
#define MT_LEEBSUBCLASSTYPE		2524
#define MT_LENGTHCLASSTYPE		2297
#define MT_LENGTHSUBCLASSTYPE		2526
#define MT_LINECLASSTYPE		2409
#define MT_LINELABELCLASSTYPE		2367
#define MT_LINENUMBERCLASSTYPE		2353
#define MT_LINESUBCLASSTYPE		2530
#define MT_LINEARFORCECLASSTYPE		2299
#define MT_LINEARSUBCLASSTYPE		2528
#define MT_LINEARTYPE		2110
#define MT_LOADCLASSTYPE		2263
#define MT_LOADEDSUBCLASSTYPE		2532
#define MT_LOADERTYPE		2112
#define MT_LOGICPROGRAMCLASSTYPE		2417
#define MT_LUBRICATIONTYPE		2114
#define MT_MTASSETEVENTTYPE		2621
#define MT_MTASSETEVENTTYPE_CATEGORY		2753
#define MT_MTASSETEVENTTYPE_CONSTRAINTS		2760
#define MT_MTASSETEVENTTYPE_CONSTRAINTS_MAXIMUM		2763
#define MT_MTASSETEVENTTYPE_CONSTRAINTS_MINIMUM		2762
#define MT_MTASSETEVENTTYPE_CONSTRAINTS_NOMINAL		2764
#define MT_MTASSETEVENTTYPE_CONSTRAINTS_VALUES		2761
#define MT_MTASSETEVENTTYPE_MTSUBTYPENAME		2755
#define MT_MTASSETEVENTTYPE_MTTYPENAME		2754
#define MT_MTASSETEVENTTYPE_NAME		2752
#define MT_MTASSETEVENTTYPE_PERIODFILTER		2759
#define MT_MTASSETEVENTTYPE_REPRESENTATION		2758
#define MT_MTASSETEVENTTYPE_SAMPLERATE		2757
#define MT_MTASSETEVENTTYPE_SOURCEDATA		2756
#define MT_MTASSETEVENTTYPE_XMLID		2751
#define MT_MTCATEGORYTYPE		2634
#define MT_MTCATEGORYTYPE_ENUMSTRINGS		2634
#define MT_MTCHANNELTYPE		2059
#define MT_MTCHANNELTYPE_CALIBRATIONDATE		2063
#define MT_MTCHANNELTYPE_CALIBRATIONINITIALS		2065
#define MT_MTCHANNELTYPE_MTDESCRIPTION		2062
#define MT_MTCHANNELTYPE_NAME		2061
#define MT_MTCHANNELTYPE_NEXTCALIBRATIONDATE		2064
#define MT_MTCHANNELTYPE_NUMBER		2060
#define MT_MTCOMPONENTTYPE		2021
#define MT_MTCOMPONENTTYPE_COMPONENTS		2042
#define MT_MTCOMPONENTTYPE_COMPOSITIONS		2043
#define MT_MTCOMPONENTTYPE_CONFIGURATION		2029
#define MT_MTCOMPONENTTYPE_DESCRIPTION		2028
#define MT_MTCOMPONENTTYPE_DESCRIPTION_DATA		2740
#define MT_MTCOMPONENTTYPE_DESCRIPTION_MANUFACTURER		2739
#define MT_MTCOMPONENTTYPE_DESCRIPTION_SERIALNUMBER		2738
#define MT_MTCOMPONENTTYPE_DESCRIPTION_STATION		2737
#define MT_MTCOMPONENTTYPE_NAME		2023
#define MT_MTCOMPONENTTYPE_NATIVENAME		2024
#define MT_MTCOMPONENTTYPE_SAMPLEINTERVAL		2027
#define MT_MTCOMPONENTTYPE_SAMPLERATE		2026
#define MT_MTCOMPONENTTYPE_UUID		2025
#define MT_MTCOMPONENTTYPE_XMLID		2022
#define MT_MTCOMPOSITIONTYPE		2067
#define MT_MTCOMPOSITIONTYPE_MTTYPENAME		2069
#define MT_MTCOMPOSITIONTYPE_NAME		2071
#define MT_MTCOMPOSITIONTYPE_UUID		2070
#define MT_MTCOMPOSITIONTYPE_XMLID		2068
#define MT_MTCONDITIONCLASSTYPE		2629
#define MT_MTCONDITIONEVENTTYPE		4326
#define MT_MTCONDITIONEVENTTYPE_ACTIVESTATE		4336
#define MT_MTCONDITIONEVENTTYPE_DATAITEMID		4327
#define MT_MTCONDITIONEVENTTYPE_MTSEVERITY		4328
#define MT_MTCONDITIONEVENTTYPE_MTSUBTYPENAME		4329
#define MT_MTCONDITIONEVENTTYPE_MTTYPENAME		4330
#define MT_MTCONDITIONEVENTTYPE_NATIVECODE		4331
#define MT_MTCONDITIONEVENTTYPE_NATIVESEVERITY		4332
#define MT_MTCONDITIONEVENTTYPE_QUALIFIER		4333
#define MT_MTCONDITIONTYPE		2660
#define MT_MTCONDITIONTYPE_CATEGORY		2917
#define MT_MTCONDITIONTYPE_CONSTRAINTS		2924
#define MT_MTCONDITIONTYPE_CONSTRAINTS_MAXIMUM		2927
#define MT_MTCONDITIONTYPE_CONSTRAINTS_MINIMUM		2926
#define MT_MTCONDITIONTYPE_CONSTRAINTS_NOMINAL		2928
#define MT_MTCONDITIONTYPE_CONSTRAINTS_VALUES		2925
#define MT_MTCONDITIONTYPE_MTSUBTYPENAME		2919
#define MT_MTCONDITIONTYPE_MTTYPENAME		2918
#define MT_MTCONDITIONTYPE_NAME		2916
#define MT_MTCONDITIONTYPE_PERIODFILTER		2923
#define MT_MTCONDITIONTYPE_REPRESENTATION		2922
#define MT_MTCONDITIONTYPE_SAMPLERATE		2921
#define MT_MTCONDITIONTYPE_SOURCEDATA		2920
#define MT_MTCONDITIONTYPE_XMLID		2915
#define MT_MTCONFIGURATIONTYPE		2044
#define MT_MTCONSTRAINTTYPE		2647
#define MT_MTCONSTRAINTTYPE_MAXIMUM		2650
#define MT_MTCONSTRAINTTYPE_MINIMUM		2649
#define MT_MTCONSTRAINTTYPE_NOMINAL		2651
#define MT_MTCONSTRAINTTYPE_VALUES		2648
#define MT_MTCONTROLLEDVOCABEVENTCLASSTYPE		2144
#define MT_MTCONTROLLEDVOCABEVENTTYPE		2626
#define MT_MTCONTROLLEDVOCABEVENTTYPE_CATEGORY		2773
#define MT_MTCONTROLLEDVOCABEVENTTYPE_CONSTRAINTS		2780
#define MT_MTCONTROLLEDVOCABEVENTTYPE_CONSTRAINTS_MAXIMUM		2783
#define MT_MTCONTROLLEDVOCABEVENTTYPE_CONSTRAINTS_MINIMUM		2782
#define MT_MTCONTROLLEDVOCABEVENTTYPE_CONSTRAINTS_NOMINAL		2784
#define MT_MTCONTROLLEDVOCABEVENTTYPE_CONSTRAINTS_VALUES		2781
#define MT_MTCONTROLLEDVOCABEVENTTYPE_MTSUBTYPENAME		2775
#define MT_MTCONTROLLEDVOCABEVENTTYPE_MTTYPENAME		2774
#define MT_MTCONTROLLEDVOCABEVENTTYPE_NAME		2772
#define MT_MTCONTROLLEDVOCABEVENTTYPE_PERIODFILTER		2779
#define MT_MTCONTROLLEDVOCABEVENTTYPE_REPRESENTATION		2778
#define MT_MTCONTROLLEDVOCABEVENTTYPE_SAMPLERATE		2777
#define MT_MTCONTROLLEDVOCABEVENTTYPE_SOURCEDATA		2776
#define MT_MTCONTROLLEDVOCABEVENTTYPE_VALUEASTEXT		3090
#define MT_MTCONTROLLEDVOCABEVENTTYPE_XMLID		2771
#define MT_MTCOORDINATESYSTEMTYPE		2635
#define MT_MTCOORDINATESYSTEMTYPE_ENUMSTRINGS		2635
#define MT_MTDATAITEMCLASSTYPE		2425
#define MT_MTDATAITEMSUBCLASSTYPE		2476
#define MT_MTDESCRIPTIONTYPE		2053
#define MT_MTDESCRIPTIONTYPE_DATA		2057
#define MT_MTDESCRIPTIONTYPE_MANUFACTURER		2056
#define MT_MTDESCRIPTIONTYPE_SERIALNUMBER		2055
#define MT_MTDESCRIPTIONTYPE_STATION		2054
#define MT_MTDEVICETYPE		2015
#define MT_MTDEVICETYPE_ISO841CLASS		2017
#define MT_MTDEVICETYPE_NAME		3668
#define MT_MTDEVICETYPE_UUID		3669
#define MT_MTDEVICETYPE_VERSION		2016
#define MT_MTEVENTCLASSTYPE		2631
#define MT_MTMESSAGECLASSTYPE		2427
#define MT_MTMESSAGEEVENTTYPE		2656
#define MT_MTMESSAGEEVENTTYPE_NATIVECODE		2657
#define MT_MTMESSAGETYPE		2471
#define MT_MTMESSAGETYPE_CATEGORY		2793
#define MT_MTMESSAGETYPE_CONSTRAINTS		2800
#define MT_MTMESSAGETYPE_CONSTRAINTS_MAXIMUM		2803
#define MT_MTMESSAGETYPE_CONSTRAINTS_MINIMUM		2802
#define MT_MTMESSAGETYPE_CONSTRAINTS_NOMINAL		2804
#define MT_MTMESSAGETYPE_CONSTRAINTS_VALUES		2801
#define MT_MTMESSAGETYPE_MTSUBTYPENAME		2795
#define MT_MTMESSAGETYPE_MTTYPENAME		2794
#define MT_MTMESSAGETYPE_NAME		2792
#define MT_MTMESSAGETYPE_PERIODFILTER		2799
#define MT_MTMESSAGETYPE_REPRESENTATION		2798
#define MT_MTMESSAGETYPE_SAMPLERATE		2797
#define MT_MTMESSAGETYPE_SOURCEDATA		2796
#define MT_MTMESSAGETYPE_XMLID		2791
#define MT_MTNUMERICEVENTCLASSTYPE		2359
#define MT_MTNUMERICEVENTTYPE		2438
#define MT_MTNUMERICEVENTTYPE_CATEGORY		2807
#define MT_MTNUMERICEVENTTYPE_CONSTRAINTS		2814
#define MT_MTNUMERICEVENTTYPE_CONSTRAINTS_MAXIMUM		2817
#define MT_MTNUMERICEVENTTYPE_CONSTRAINTS_MINIMUM		2816
#define MT_MTNUMERICEVENTTYPE_CONSTRAINTS_NOMINAL		2818
#define MT_MTNUMERICEVENTTYPE_CONSTRAINTS_VALUES		2815
#define MT_MTNUMERICEVENTTYPE_COORDINATESYSTEM		2822
#define MT_MTNUMERICEVENTTYPE_DURATION		3671
#define MT_MTNUMERICEVENTTYPE_INITIALVALUE		2823
#define MT_MTNUMERICEVENTTYPE_MTSUBTYPENAME		2809
#define MT_MTNUMERICEVENTTYPE_MTTYPENAME		2808
#define MT_MTNUMERICEVENTTYPE_MINIMUMDELTAFILTER		2826
#define MT_MTNUMERICEVENTTYPE_NAME		2806
#define MT_MTNUMERICEVENTTYPE_NATIVEUNITS		2821
#define MT_MTNUMERICEVENTTYPE_PERIODFILTER		2813
#define MT_MTNUMERICEVENTTYPE_REPRESENTATION		2812
#define MT_MTNUMERICEVENTTYPE_RESETTRIGGER		2824
#define MT_MTNUMERICEVENTTYPE_RESETTRIGGEREDREASON		3675
#define MT_MTNUMERICEVENTTYPE_SAMPLERATE		2811
#define MT_MTNUMERICEVENTTYPE_SIGNIFICANTDIGITS		2819
#define MT_MTNUMERICEVENTTYPE_SOURCEDATA		2810
#define MT_MTNUMERICEVENTTYPE_STATISTIC		2820
#define MT_MTNUMERICEVENTTYPE_UNITS		2825
#define MT_MTNUMERICEVENTTYPE_XMLID		2805
#define MT_MTREPRESENTATIONTYPE		2633
#define MT_MTREPRESENTATIONTYPE_ENUMSTRINGS		2633
#define MT_MTRESETTRIGGERTYPE		2636
#define MT_MTRESETTRIGGERTYPE_ENUMSTRINGS		2636
#define MT_MTSAMPLECLASSTYPE		2345
#define MT_MTSAMPLETYPE		2429
#define MT_MTSAMPLETYPE_CATEGORY		2841
#define MT_MTSAMPLETYPE_CONSTRAINTS		2848
#define MT_MTSAMPLETYPE_CONSTRAINTS_MAXIMUM		2851
#define MT_MTSAMPLETYPE_CONSTRAINTS_MINIMUM		2850
#define MT_MTSAMPLETYPE_CONSTRAINTS_NOMINAL		2852
#define MT_MTSAMPLETYPE_CONSTRAINTS_VALUES		2849
#define MT_MTSAMPLETYPE_COORDINATESYSTEM		2856
#define MT_MTSAMPLETYPE_DURATION		3672
#define MT_MTSAMPLETYPE_INITIALVALUE		2857
#define MT_MTSAMPLETYPE_MTSUBTYPENAME		2843
#define MT_MTSAMPLETYPE_MTTYPENAME		2842
#define MT_MTSAMPLETYPE_MINIMUMDELTAFILTER		2860
#define MT_MTSAMPLETYPE_NAME		2840
#define MT_MTSAMPLETYPE_NATIVEUNITS		2855
#define MT_MTSAMPLETYPE_PERIODFILTER		2847
#define MT_MTSAMPLETYPE_REPRESENTATION		2846
#define MT_MTSAMPLETYPE_RESETTRIGGER		2858
#define MT_MTSAMPLETYPE_RESETTRIGGEREDREASON		3676
#define MT_MTSAMPLETYPE_SAMPLERATE		2845
#define MT_MTSAMPLETYPE_SIGNIFICANTDIGITS		2853
#define MT_MTSAMPLETYPE_SOURCEDATA		2844
#define MT_MTSAMPLETYPE_STATISTIC		2854
#define MT_MTSAMPLETYPE_UNITS		2859
#define MT_MTSAMPLETYPE_XMLID		2839
#define MT_MTSENSORCONFIGURATIONTYPE		2046
#define MT_MTSENSORCONFIGURATIONTYPE_CALIBRATIONDATE		2048
#define MT_MTSENSORCONFIGURATIONTYPE_CALIBRATIONINITIALS		2050
#define MT_MTSENSORCONFIGURATIONTYPE_CHANNELS		2052
#define MT_MTSENSORCONFIGURATIONTYPE_FIRWAREVERSION		2047
#define MT_MTSENSORCONFIGURATIONTYPE_NEXTCALIBRATIONDATE		2049
#define MT_MTSEVERITYDATATYPE		2669
#define MT_MTSEVERITYDATATYPE_ENUMSTRINGS		2669
#define MT_MTSTATISTICTYPE		2659
#define MT_MTSTATISTICTYPE_ENUMSTRINGS		2659
#define MT_MTSTRINGEVENTCLASSTYPE		2361
#define MT_MTSTRINGEVENTTYPE		2433
#define MT_MTSTRINGEVENTTYPE_CATEGORY		2869
#define MT_MTSTRINGEVENTTYPE_CONSTRAINTS		2876
#define MT_MTSTRINGEVENTTYPE_CONSTRAINTS_MAXIMUM		2879
#define MT_MTSTRINGEVENTTYPE_CONSTRAINTS_MINIMUM		2878
#define MT_MTSTRINGEVENTTYPE_CONSTRAINTS_NOMINAL		2880
#define MT_MTSTRINGEVENTTYPE_CONSTRAINTS_VALUES		2877
#define MT_MTSTRINGEVENTTYPE_MTSUBTYPENAME		2871
#define MT_MTSTRINGEVENTTYPE_MTTYPENAME		2870
#define MT_MTSTRINGEVENTTYPE_NAME		2868
#define MT_MTSTRINGEVENTTYPE_PERIODFILTER		2875
#define MT_MTSTRINGEVENTTYPE_REPRESENTATION		2874
#define MT_MTSTRINGEVENTTYPE_SAMPLERATE		2873
#define MT_MTSTRINGEVENTTYPE_SOURCEDATA		2872
#define MT_MTSTRINGEVENTTYPE_XMLID		2867
#define MT_MTTHREESPACESAMPLETYPE		2641
#define MT_MTTHREESPACESAMPLETYPE_CATEGORY		2883
#define MT_MTTHREESPACESAMPLETYPE_CONSTRAINTS		2890
#define MT_MTTHREESPACESAMPLETYPE_CONSTRAINTS_MAXIMUM		2893
#define MT_MTTHREESPACESAMPLETYPE_CONSTRAINTS_MINIMUM		2892
#define MT_MTTHREESPACESAMPLETYPE_CONSTRAINTS_NOMINAL		2894
#define MT_MTTHREESPACESAMPLETYPE_CONSTRAINTS_VALUES		2891
#define MT_MTTHREESPACESAMPLETYPE_COORDINATESYSTEM		2898
#define MT_MTTHREESPACESAMPLETYPE_DURATION		3673
#define MT_MTTHREESPACESAMPLETYPE_ENGINEERINGUNITS		2642
#define MT_MTTHREESPACESAMPLETYPE_INITIALVALUE		2899
#define MT_MTTHREESPACESAMPLETYPE_MTSUBTYPENAME		2885
#define MT_MTTHREESPACESAMPLETYPE_MTTYPENAME		2884
#define MT_MTTHREESPACESAMPLETYPE_MINIMUMDELTAFILTER		2902
#define MT_MTTHREESPACESAMPLETYPE_NAME		2882
#define MT_MTTHREESPACESAMPLETYPE_NATIVEUNITS		2897
#define MT_MTTHREESPACESAMPLETYPE_PERIODFILTER		2889
#define MT_MTTHREESPACESAMPLETYPE_REPRESENTATION		2888
#define MT_MTTHREESPACESAMPLETYPE_RESETTRIGGER		2900
#define MT_MTTHREESPACESAMPLETYPE_RESETTRIGGEREDREASON		3677
#define MT_MTTHREESPACESAMPLETYPE_SAMPLERATE		2887
#define MT_MTTHREESPACESAMPLETYPE_SIGNIFICANTDIGITS		2895
#define MT_MTTHREESPACESAMPLETYPE_SOURCEDATA		2886
#define MT_MTTHREESPACESAMPLETYPE_STATISTIC		2896
#define MT_MTTHREESPACESAMPLETYPE_UNITS		2901
#define MT_MTTHREESPACESAMPLETYPE_XMLID		2881
#define MT_MACHINEAXISLOCKSUBCLASSTYPE		2534
#define MT_MAINTENANCESUBCLASSTYPE		2536
#define MT_MANUALUNCLAMPSUBCLASSTYPE		2538
#define MT_MASSCLASSTYPE		2301
#define MT_MATERIALCHANGECLASSTYPE		2235
#define MT_MATERIALCLASSTYPE		2369
#define MT_MATERIALFEEDCLASSTYPE		2231
#define MT_MATERIALHANDLERINTERFACETYPE		2116
#define MT_MATERIALLOADCLASSTYPE		2241
#define MT_MATERIALRETRACTCLASSTYPE		2238
#define MT_MATERIALUNLOADCLASSTYPE		2244
#define MT_MATERIALSTYPE		2118
#define MT_MAXIMUMSUBCLASSTYPE		2540
#define MT_MESSAGECLASSTYPE		2403
#define MT_MESSAGEDATATYPE		2653
#define MT_MINIMUMSUBCLASSTYPE		2542
#define MT_MOHSSUBCLASSTYPE		2544
#define MT_MOLESUBCLASSTYPE		2546
#define MT_MOTIONPROGRAMCLASSTYPE		2421
#define MT_MOTIONSUBCLASSTYPE		2548
#define MT_NOSCALESUBCLASSTYPE		2550
#define MT_ONOFFDATATYPE		2204
#define MT_ONOFFDATATYPE_ENUMSTRINGS		2204
#define MT_OPENCHUCKCLASSTYPE		2253
#define MT_OPENDOORCLASSTYPE		2247
#define MT_OPENSTATEDATATYPE		2201
#define MT_OPENSTATEDATATYPE_ENUMSTRINGS		2201
#define MT_OPERATINGSUBCLASSTYPE		2552
#define MT_OPERATORIDCLASSTYPE		2371
#define MT_OPERATORSUBCLASSTYPE		2554
#define MT_OPTIONALSTOPSUBCLASSTYPE		2556
#define MT_OVERRIDESUBCLASSTYPE		2558
#define MT_PHCLASSTYPE		2307
#define MT_PALLETIDCLASSTYPE		2373
#define MT_PARTCHANGECLASSTYPE		2259
#define MT_PARTCOUNTCLASSTYPE		2355
#define MT_PARTIDCLASSTYPE		2375
#define MT_PARTNUMBERCLASSTYPE		2377
#define MT_PATHFEEDRATECLASSTYPE		2303
#define MT_PATHFEEDRATEOVERRIDECLASSTYPE		3628
#define MT_PATHMODECLASSTYPE		2215
#define MT_PATHMODEDATATYPE		2209
#define MT_PATHMODEDATATYPE_ENUMSTRINGS		2209
#define MT_PATHPOSITIONCLASSTYPE		2305
#define MT_PATHTYPE		2120
#define MT_PERSONNELTYPE		2122
#define MT_PNEUMATICTYPE		2124
#define MT_POSITIONCLASSTYPE		2309
#define MT_POWERFACTORCLASSTYPE		2311
#define MT_POWERSTATECLASSTYPE		2218
#define MT_POWEREDSUBCLASSTYPE		2562
#define MT_PRESSURECLASSTYPE		2313
#define MT_PRIMARYSUBCLASSTYPE		2560
#define MT_PROBESUBCLASSTYPE		2564
#define MT_PROCESSPOWERTYPE		2126
#define MT_PROCESSSUBCLASSTYPE		2566
#define MT_PROCESSTIMERCLASSTYPE		2315
#define MT_PROGRAMCLASSTYPE		2379
#define MT_PROGRAMCOMMENTCLASSTYPE		2385
#define MT_PROGRAMEDITCLASSTYPE		2221
#define MT_PROGRAMEDITDATATYPE		2210
#define MT_PROGRAMEDITDATATYPE_ENUMSTRINGS		2210
#define MT_PROGRAMEDITNAMECLASSTYPE		2381
#define MT_PROGRAMHEADERCLASSTYPE		2383
#define MT_PROGRAMMEDSUBCLASSTYPE		2568
#define MT_PROTECTIVETYPE		2128
#define MT_QUALIFIERDATATYPE		2668
#define MT_QUALIFIERDATATYPE_ENUMSTRINGS		2668
#define MT_RADIALSUBCLASSTYPE		2570
#define MT_RAPIDSUBCLASSTYPE		2572
#define MT_RELATIVESUBCLASSTYPE		2574
#define MT_REMAININGSUBCLASSTYPE		2576
#define MT_REQUESTSUBCLASSTYPE		2578
#define MT_RESISTENCECLASSTYPE		2317
#define MT_RESOURCESTYPE		2130
#define MT_RESPONSESUBCLASSTYPE		2580
#define MT_ROCKWELLSUBCLASSTYPE		2582
#define MT_ROTARYMODECLASSTYPE		2224
#define MT_ROTARYMODEDATATYPE		2211
#define MT_ROTARYMODEDATATYPE_ENUMSTRINGS		2211
#define MT_ROTARYSUBCLASSTYPE		2584
#define MT_ROTARYTYPE		2132
#define MT_ROTARYVELOCITYCLASSTYPE		2319
#define MT_ROTARYVELOCITYOVERRIDECLASSTYPE		2357
#define MT_SENSORTYPE		2134
#define MT_SERIALNUMBERCLASSTYPE		2387
#define MT_SETUPSUBCLASSTYPE		2586
#define MT_SHORESUBCLASSTYPE		2588
#define MT_SOUNDLEVELCLASSTYPE		2321
#define MT_SPINDLEINTERLOCKCLASSTYPE		2212
#define MT_STANDARDSUBCLASSTYPE		2590
#define MT_STOCKTYPE		2136
#define MT_STRAINCLASSTYPE		2323
#define MT_SWITCHEDSUBCLASSTYPE		2592
#define MT_SYSTEMCLASSTYPE		2423
#define MT_SYSTEMSTYPE		2138
#define MT_TARGETSUBCLASSTYPE		2594
#define MT_TEMPERATURECLASSTYPE		2325
#define MT_TENSIONCLASSTYPE		2327
#define MT_THREESPACESAMPLEDATATYPE		2637
#define MT_TILTCLASSTYPE		2329
#define MT_TOOLASSETIDCLASSTYPE		2389
#define MT_TOOLCHANGESTOPSUBCLASSTYPE		2596
#define MT_TOOLEDGESUBCLASSTYPE		2598
#define MT_TOOLGROUPSUBCLASSTYPE		2600
#define MT_TOOLNUMBERCLASSTYPE		2391
#define MT_TOOLOFFSETCLASSTYPE		2393
#define MT_TOOLSUBCLASSTYPE		2602
#define MT_TOOLINGDELIVERYTYPE		2140
#define MT_TORQUECLASSTYPE		2331
#define MT_UASBLESUBCLASSTYPE		2604
#define MT_USERCLASSTYPE		2395
#define MT_VELOCITYCLASSTYPE		2335
#define MT_VERTICALSUBCLASSTYPE		2606
#define MT_VICKERSSUBCLASSTYPE		2610
#define MT_VISCOSITYCLASSTYPE		2339
#define MT_VOLTAMPERECLASSTYPE		2333
#define MT_VOLTAMPEREREACTIVECLASSTYPE		2337
#define MT_VOLTAGECLASSTYPE		2341
#define MT_VOLUMESUBCLASSTYPE		2608
#define MT_WASTEDISPOSALTYPE		2142
#define MT_WATTAGECLASSTYPE		2343
#define MT_WEIGHTSUBCLASSTYPE		2612
#define MT_WIRECLASSTYPE		2397
#define MT_WORKOFFSETCLASSTYPE		2401
#define MT_WORKHOLDINGCLASSTYPE		2399
#define MT_WORKINGSUBCLASSTYPE		2614
#define MT_WORKPIECESUBCLASSTYPE		2616
#define MT_YESNODATATYPE		2206
#define MT_YESNODATATYPE_ENUMSTRINGS		2206
 
extern std::map<std::string, UA_UInt32> mtIDMap; 
#endif
