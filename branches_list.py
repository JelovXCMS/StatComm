# coding=utf8

branches = {}

# 1. Analysis Context
# 1.1. Your name
branches["secac_name_text"]='C'
# 1.2. Your email address
branches["secac_email_text"]='C'
# 1.3. Working group
branches["secac_wg"]='C'
branches["secac_wg_text"]='C'
# 1.4. CADI entry number, if available (e.g., HIG-11-032)
branches["secac_cadi_text"]='C'
# 1.5. If a CADI entry is available, please make sure you fill it correctly, as an email will be sent to the review Hypernews associated to the CADI line. If no CADI entry is available, please provide the title and applicable references (analysis note numbers, etc.):
branches["secac_references_text"]='C'
# 1.6. Preapproval date
branches["secac_preappdate"]='C'
branches["secac_preappdate_text"]='C'
# 1.7. Please provide a three-line summary of the analysis: what is being measured or sought for, what dataset, and how.
branches["secac_analysiscontext_textarea"]='C'
# 1.8. CADI entry numbers of analyses with same/similar statistical treatment (including earlier version of this analysis, if applicable). Please point out all relevant similarities / differences.
branches["secac_related_textarea"]='C'

# 2. General information
# 2.1. Are you aware that the Statistics Committee has a <a href="https://twiki.cern.ch/twiki/bin/view/CMS/StatisticsCommittee">TWiki page...
branches["secgi_faqaware"]='C'
# 2.2. Are you aware that the Statistics Committee will make an effort to promptly answer your question on statistics issues if sent via the <a href="https://hypernews.cern.ch/HyperNews/CMS/get/statistics.html">Statistics Discussions Hypernews forum</a>, or to the Committee's mailing list <a href="mailto:cms-statistics-committee@cern.ch">cms-statistics-committee@cern.ch</a>?
branches["secgi_listaware"]='C'
# 2.3. Have you subscribed yet to the Statistics Discussions Hypernews forum (if not, we suggest that you do)?
branches["secgi_listsubscribed"]='C'
# 2.4. Have you interacted with the Statistics Committee in the past (via email, HN, or in person) to discuss an issue with a CMS analysis ?
branches["secgi_pastinteraction"]='C'
# 2.5. Are you aware that the Statistics Committee meets regularly (Vidyo only; look for announcement in Statistics Discussions HN forum) and that everybody is welcome to participate ?
branches["secgi_openmeetings"]='C'

# 3. Multivariate discriminants
# 3.1. Have you read the <a href="https://twiki.cern.ch/twiki/bin/viewauth/CMS/StatComRec-Selection">SC TWiki page on MVA recommendations</a>?
branches["secmva_readtwiki"]='C'
# 3.2. Are you using a multi-variate discriminant in your data analysis to discriminate between signal and background?
branches["secmva_using"]='C'
# 3.3. What software are you using?
branches["secmva_software_tmva"]='C'
branches["secmva_software_other"]='C'
branches["secmva_software_textarea"]='C'
# 3.4. What type of discriminant do you use?
branches["secmva_type_bdt"]='C'
branches["secmva_type_fisher"]='C'
branches["secmva_type_plikelihood"]='C'
branches["secmva_type_nn"]='C'
branches["secmva_type_other"]='C'
branches["secmva_type_textarea"]='C'
# 3.5. How do you make use of the MVA output in the analysis?
branches["secmva_outputuse_cut"]='C'
branches["secmva_outputuse_fit"]='C'
branches["secmva_outputuse_other"]='C'
branches["secmva_outputuse_textarea"]='C'
# 3.6. How have you checked that the input variables, including their dependencies, are well-modeled?
branches["secmva_inputchecks_oned"]='C'
branches["secmva_inputchecks_twod"]='C'
branches["secmva_inputchecks_other"]='C'
branches["secmva_inputchecks_textarea"]='C'
# 3.7. Do you study the correlations and dependencies between the input variables?
branches["secmva_inputcorrelations_linear"]='C'
branches["secmva_inputcorrelations_nonlinear"]='C'
branches["secmva_inputcorrelations_other"]='C'
branches["secmva_inputcorrelations_textarea"]='C'
# 3.8. How do you select the input variables? Do you perform any pruning of your initial list of input variables, based on the correlations or dependencies between the input variables?
branches["secmva_variableselection"]='C'
branches["secmva_variableselection_textarea"]='C'
# 3.9. Are you aware that some MVA techniques may classify data events as very signal-like if any of their variables take values in regions where the background training samples have no events?
branches["secmva_nullpdf"]='C'
branches["secmva_nullpdf_textarea"]='C'
# 3.10. When training with more than one background, do you mix all samples in the proportions you expect in data?
branches["secmva_bkgmix"]='C'
branches["secmva_bkgmix_textarea"]='C'
# 3.11. How do you make sure you are not affected by overtraining?
branches["secmva_overtraining"]='C'
branches["secmva_overtraining_textarea"]='C'
# 3.12. Do you perform the following robustness check?<br/> Train two (or more) MVAs starting from different random sets of weights, and then look at the event-by-event correlation in the final output. It should be very diagonal.
branches["secmva_robustness"]='C'
branches["secmva_robustness_textarea"]='C'

# 4. Data fitting
# 4.1. Does the analysis include fitting of data distributions?
branches["secfitting_using"]='C'
# 4.2. Which fits are you performing in your analysis? (please use the "Additional comments" field)
branches["secfitting_whichfits_textarea"]='C'
# 4.3. Which functional forms are used?
branches["secfitting_functionalform_templates"]='C'
branches["secfitting_functionalform_parametric"]='C'
branches["secfitting_functionalform_other"]='C'
branches["secfitting_functionalform_textarea"]='C'
# 4.4. How do you choose the fitting model?
branches["secfitting_modelchoice_mctemplates"]='C'
branches["secfitting_modelchoice_sbtemplates"]='C'
branches["secfitting_modelchoice_theorycurve"]='C'
branches["secfitting_modelchoice_theoryinspired"]='C'
branches["secfitting_modelchoice_adhoc"]='C'
branches["secfitting_modelchoice_other"]='C'
branches["secfitting_modelchoice_textarea"]='C'
# 4.5. Which test statistic are you using to perform the fit(s)?
branches["secfitting_teststat_chi2"]='C'
branches["secfitting_teststat_binnedl"]='C'
branches["secfitting_teststat_unbinnedl"]='C'
branches["secfitting_teststat_other"]='C'
branches["secfitting_teststat_textarea"]='C'
# 4.5.1. What drove you to this particular choice ?
branches["secfitting_teststat_nounbinlik_textarea"]='C'
# 4.6. Do you perform a goodness-of-fit test for the fit(s)?
branches["secfitting_gof"]='C'
# 4.6.1. What is/are the resulting p-value(s)?
branches["secfitting_gof_p_dontknow"]='C'
branches["secfitting_gof_p_ltp1"]='C'
branches["secfitting_gof_p_p1to1"]='C'
branches["secfitting_gof_p_oneto5"]='C'
branches["secfitting_gof_p_fiveto99"]='C'
branches["secfitting_gof_p_nnto99p9"]='C'
branches["secfitting_gof_p_gt99p9"]='C'
branches["secfitting_gof_textarea"]='C'
# 4.7. Do you check that the pull distribution in toy experiments is distributed as expected for an unbiased method (mean 0, width 1)?
branches["secfitting_pulls"]='C'
branches["secfitting_pulls_textarea"]='C'
# 4.8. In case you are using the returned parameters in other parts of your analysis: are you accounting for the covariance matrix (error and off-diagonal correlation terms) of the parameter uncertainties?
branches["secfitting_cov"]='C'
branches["secfitting_cov_textarea"]='C'
# 4.9. In case you perform a fit to the background shape with a function: How do you choose the functional form?
branches["secfitting_shapechoice"]='C'
branches["secfitting_shapechoice_textarea"]='C'
# 4.10. In case you perform a fit using a functional form which exists for many different number of parameters (such as polynomials): How are you choosing the number of parameters?
branches["secfitting_pruning"]='C'
branches["secfitting_pruning_textarea"]='C'
# 4.11. Are any of the parameters returned by the fit close (less than 3 sigma) to their physical or pre-defined boundary?
branches["secfitting_boundary"]='C'
branches["secfitting_boundary_textarea"]='C'
# 4.XX deprecated question
branches["secfitting_bkgshapesyst"]='C'
branches["secfitting_bkgshapesyst_textarea"]='C'

# 5. Confidence intervals and limits
# 5.1. Does the analysis include the setting of limits on some parameter or placing a confidence interval on some parameter?
branches["intervals_using"]='C'
# 5.2. Will you cite a limit or a two-sided confidence interval?
branches["intervals_sidednessdecision"]='C'
branches["intervals_sidednessdecision_textarea"]='C'
# 5.3. Are you aware of the agreement between ATLAS and CMS regarding limit setting, which — among other things — requires the CLs method for Higgs and SUSY analyses?
branches["intervals_cls"]='C'
# 5.4. Are you aware that the Statistics Committee provides support and a simple recipe to include the derivation of Feldman-Cousins confidence intervals in RooStats jobs that are currently used to compute CLs limits?
branches["intervals_roostatsclsfc"]='C'
# 5.5. If you are using a Bayesian technique, are you aware that the SC recommends to perform a prior sensitivity analysis, both on the PDFs of parameters describing the systematic uncertainties (nuisance parameters) and on the PDF of the parameter to be estimated?
branches["intervals_prioranalysis"]='C'
# 5.6. Mark the approach(es) you are using
branches["intervals_approach_freqlimits"]='C'
branches["intervals_approach_freqintervals"]='C'
branches["intervals_approach_modfreq"]='C'
branches["intervals_approach_pllimits"]='C'
branches["intervals_approach_plintervals"]='C'
branches["intervals_approach_unified"]='C'
branches["intervals_approach_bayesianflat"]='C'
branches["intervals_approach_bayesianref"]='C'
branches["intervals_approach_other"]='C'
branches["intervals_approach_textarea"]='C'
# 5.7. What software tool are you using for your confidence interval calculations?
branches["intervals_software_combine"]='C'
branches["intervals_software_lands"]='C'
branches["intervals_software_roostats"]='C'
branches["intervals_software_theta"]='C'
branches["intervals_software_other"]='C'
branches["intervals_software_textarea"]='C'
# 5.8. In the case of frequentist/CLs confidence interval construction: which test statistic do you use?
branches["intervals_ts"]='C'
branches["intervals_ts_textarea"]='C'
# 5.8.1. If you chose "other" in the previous question, please specify the test statistic used here.<br/> As an example of the detail you should provide: "the HCG choice is qmu = -2 Ln[L(mu, theta_mu_* )/L(mu* ,theta* )], with 0 &lt; mu* &lt; mu at the denominator, and the numerator has nuisances set at conditional ML estimate for data at given mu, theta_mu_*"
branches["intervals_ts_tsdetail_textarea"]='C'
# 5.9. Do you use asymptotic formulae from the paper <a href="https://arxiv.org/abs/1007.1727" title="arXiv:1007.1727">https://arxiv.org/abs/1007.1727v3</a> for your confidence interval estimations?
branches["intervals_useasyformulae"]='C'
# 5.9.1. If you choose "Yes" in the previous question, did you make a cross check with toys, e.g. checking the agreement of toy and asymptotics based upper limits for some exemplary values of new physics model parameters such as the mass of a new particle?
branches["intervals_useasyformulae_asycheckwithtoys"]='C'
# 5.10. In the case toy data is generated as part of the procedure—e.g. to determine the test statistic distribution or to compute the expected limit / expected limit bands—please specify how the nuisance parameter are chosen for the toys:
branches["intervals_toygen"]='C'
branches["intervals_toygen_textarea"]='C'
# 5.11. In case you convert a limit on a signal cross section into a limit on the mass (or another parameter; we call it "mass" here): how do you account for the theory error on the signal cross section?
branches["intervals_theoryerror"]='C'
branches["intervals_theoryerror_textarea"]='C'

# 6. Discovery
# 6.1. Have you read the discovery-related TWiki pages on <a href="https://twiki.cern.ch/twiki/bin/view/CMS/SearchProcedures">Search Procedures</a>, <a href="https://twiki.cern.ch/twiki/bin/view/CMS/SensitivityCalculations">Sensitivity Calculations</a>, and <a href="https://twiki.cern.ch/twiki/bin/view/CMS/LookElsewhereEffect">Look-Elsewhere Effect</a> (if applicable)?
branches["secdisc_twiki"]='C'
# 6.2. Does the analysis include discovery-related statements, such as citing p-values of the null hypothesis or a "significance"?
branches["secdisc_using"]='C'
# 6.3. To evaluate the p-value(s) of the null hypothesis, what test statistic was used?
branches["secdisc_ts"]='C'
branches["secdisc_ts_textarea"]='C'
# 6.4. Do you account for the look-elsewhere effect?
branches["secdisc_lee"]='C'
branches["secdisc_lee_textarea"]='C'

# 7. Unfolding
# 7.1. Is unfolding used in parts of the analysis?
branches["secunf_using"]='C'
# 7.2. Have you read the <a href="https://twiki.cern.ch/twiki/bin/view/CMS/ScrecUnfolding">SC TWiki page on recommendations for unfolding techniques</a>?
branches["secunf_reeadrecomm"]='C'
# 7.3. Are you aware that the SC discourages the use of bin-by-bin unfolding, or correction factors, and in general on techniques neglecting correlations?
branches["secunf_binbybin"]='C'
# 7.4. Which unfolding technique are you using?
branches["secunf_technique"]='C'
branches["secunf_technique_binbybin"]='C'
branches["secunf_technique_matrixinv"]='C'
branches["secunf_technique_techniquegeneralized"]='C'
branches["secunf_technique_dagostini"]='C'
branches["secunf_technique_other"]='C'
branches["secunf_technique_regmatrixinv"]='C'
branches["secunf_technique_textarea"]='C'
# 7.5. Which software are you using?
branches["secunf_software"]='C'
branches["secunf_software_roounfold"]='C'
branches["secunf_software_tunfold"]='C'
branches["secunf_software_other"]='C'
branches["secunf_software_textarea"]='C'
# 7.6. We recommend to try unfolding without regularization, have you tested this?
branches["secunf_checknoregularization"]='C'
branches["secunf_checknoregularization_textarea"]='C'
# 7.7. The condition number of the response matrix (it can be determined using e.g. the TDecompSVD class in ROOT) can be a good indicator of whether regularization is needed or not. What is its value?
branches["secunf_conditionnumber_textarea"]='C'
# 7.8. If you have performed unfolding with regularization, by which objective criterion have you chosen the regularization parameter (number of iterations in case of D'Agostini or other iterative unfolding methods)?
branches["secunf_checkregularizationstrength_textarea"]='C'
# 7.9. Validation of unfolding
# 7.9.1. Have you used toy experiments to verify the coverage of the unfolded uncertainties?
branches["secunf_validation_validationcoverage"]='C'
branches["secunf_validation_validationotherchecks_textarea"]='C'
# 7.9.2. Which other checks have you performed for validation (e.g. comparison with other techniques, unfolding reweighted MCs, unfolding one fully simulated MC using a MC with a different physics model for the response matrix and regularization, etc.)?
branches["secunf_validation_validationotherchecks_textarea"]='C'
# 7.9.3 Have you performed the bottom line test?
branches["secunf_validation_bottomlinetest"]='C'
branches["secunf_validation_bottomlinetest_textarea"]='C'
branches["secunf_validation_textarea"]='C'
# 7.10. In case you apply weights to the number of observed (real data) events, e.g. to correct for trigger prescales:
branches["secunf_eventweights"]='C'
branches["secunf_eventweights_textarea"]='C'
# 7.11. Which information do you intend to make publicly available?
# 7.11.1. The unfolded histogram and its total covariance matrix
branches["secunf_publiclyavailableunfolding_unfoldedandcovariancematrix"]='C'
# 7.11.2. The response matrix K as a coloured 2D histogram
branches["secunf_publiclyavailableunfolding_responsematrixcoloured"]='C'
branches["secunf_publiclyavailableunfolding_other"]='C'
branches["secunf_publiclyavailableunfolding_textarea"]='C'

# 8. Systematic Uncertainties
# 8.1. Have you read the SC recommendation TWiki pages on systematic uncertainties?
branches["secsyst_twiki"]='C'
# 8.2. Have you considered that systematic uncertainties constrained by sideband measurements in the data, and whose estimate thus depends on the size of the analyzed dataset, should be treated as statistical uncertainties?
branches["secsyst_syststat"]='C'
# 8.3. If including a systematic effect as nuisance parameter in the model, are you aware that the SC recommends the use of Gamma or Log-Normal priors instead of truncated Gaussians?
branches["secsyst_priorform"]='C'
# 8.4. Does your analysis include "cross-checks" of your method, e.g. the verification of a technique on a subsidiary set of data?
branches["secsyst_crosscheck"]='C'
# 8.4.1. Are you deriving a systematic uncertainty on your main measurement from the level of agreement you observe in the cross-check?
branches["secsyst_crosscheck_syst"]='C'
# 8.4.2. What would you have done if the cross-check failed (e.g. p-value below 0.01, or other pre-defined criterion)?
branches["secsyst_crosscheck_whattodo_textarea"]='C'
branches["secsyst_crosscheck_textarea"]='C'
# 8.5. Do you use "template morphing" in you analysis, e.g. to model a systematic uncertainty in the statistical model?
branches["secsyst_tmorphing"]='C'
branches["secsyst_tmorphing_textarea"]='C'

# 9. Parton distribution functions
# 9.1. Estimation of the PDF uncertainty on the measurement:
# 9.1.1. How do you estimate the PDF uncertainty on your measurement, e.g. effects on the acceptance?
branches["secpdf_pdfuncs_howest"]='C'
branches["secpdf_pdfuncs_howest_textarea"]='C'
# 9.2. Do you perform a SM measurement to test QCD or to determine SM parameters like proton PDFs, heavy-quark masses, or the strong coupling constant alpha_s?
branches["secpdf_faq"]='C'
# 9.2.1. How do you estimate the sensitivity of Your observable to QCD parameters/PDFs?
branches["secpdf_faq_obssens"]='C'
# 9.2.2. Do you plan to provide Your measurement to HEPDATA including correlation matrices to be used by PDF groups? (The PDF forum provides support for pushing measurements to HEPDATA.)
branches["secpdf_faq_planhepdata"]='C'
branches["secpdf_faq_planhepdata_textarea"]='C'
# 9.3. Comparison of Your measurement to theory predictions for the interpretation of the results:
# 9.3.1. Does the order of the PDF you use (LO, NLO, NNLO) correspond to the order of the calculation you are using?
branches["secpdf_compinter_pdforder"]='C'
branches["secpdf_compinter_pdforder_textarea"]='C'
# 9.3.2. How did you choose the PDFs to compare your measurements to the theory prediction?
branches["secpdf_compinter_choicepdf"]='C'
branches["secpdf_compinter_choicepdf_textarea"]='C'
# 9.3.3. Did you properly cite every PDF set employed even when used only within the context of the PDF4LHC recommendation or CMS or META PDFs?
branches["secpdf_compinter_propercit"]='C'
# 9.3.4. Do you estimate the PDF uncertainty on your prediction using the procedure described in the publication of the particular PDF you use?
branches["secpdf_compinter_description"]='C'

# 10. Other statistics related items
# 10.1. Do you perform a blind analysis? If so, can you succinctly describe what was done?
branches["secother_blind"]='C'
branches["secother_blind_textarea"]='C'
# 10.2. In case you combine measurements in your analysis: what method is used?
branches["secother_combination"]='C'
branches["secother_combination_textarea"]='C'
# 10.3. In case you use the results of another CMS analysis: how did you treat correlations from common systematic uncertainties and from potential overlap in the datasets?
branches["secother_cmscomb"]='C'
branches["secother_cmscomb_doesntapply"]='C'
branches["secother_cmscomb_yes"]='C'
branches["secother_cmscomb_textarea"]='C'
# deprecated
branches["secother_faq"]='C'

# 11. Comments and feedback
# 11.1. What statistical element of your analysis is not yet frozen (what changes can be expected)?
branches["secfeedback_changes"]='C'
branches["secfeedback_changes_textarea"]='C'
# 11.2. Do you have any additional comment related to the analysis? Is there a statistic-related element of your analysis not covered by this questionnaire?
branches["secfeedback_comment_textarea"]='C'
# 11.3. Do you have a suggestion for improving this questionnaire? Do you have a suggestion for improving interaction with the CMS Statistics Committee in general or documentation of   statistical recommendations?
branches["secfeedback_feedback_textarea"]='C'

# Questionnaire status (to remove updates, __updates should be 0)
branches["__save"]='C'
branches["__submit"]='C'
branches["__updates"]='C'

branches_str = ":".join(row + '/' + branches[row] for row in branches)

# add the date
branches_str += ":date/C:year/I:month/I:day/I"
