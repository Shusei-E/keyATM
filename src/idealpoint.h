#ifndef __IDEALPOINT__INCLUDED__
#define __IDEALPOINT__INCLUDED__

#include <Rcpp.h>
#include <RcppEigen.h>
#include <unordered_set>
#include "sampler.h"

class IDEALPOINT
{
	public:
		// Variables From R
		Rcpp::List model;
		Rcpp::List W, Z;
		Rcpp::StringVector vocab;
		Rcpp::List model_fit;
		double gamma_1, gamma_2;
	 	double beta;
		int num_doc;
		int num_vocab;
		int num_topics;
		int num_cov;
		int total_words;
		int iter;
		int output_iter;

		// Variables for the Model
		Eigen::MatrixXd C;
		Eigen::MatrixXi n_kv;	
		Eigen::MatrixXd n_dk;
	  Eigen::VectorXi n_k;
		Eigen::MatrixXd Lambda;
		Eigen::MatrixXd Alpha;
		
		// Constructor
		IDEALPOINT(Rcpp::List model_, const int K,
				const int iter_, const int output_iter_);

		// Main functions
		void initialize();
		void iteration();
		int sample_z(Eigen::VectorXd &alpha, int &z,
				  	     int &w, int &doc_id);
		void lambda_sample();
		void lambda_store();
		void loglik_store(int& r_index);
		double loglik_calc();
		double loglik_lambda();

		// Sub functions
		std::vector<int> shuffled_indexes(int m);
		int rcat_without_normalize(Eigen::VectorXd &prob, double &total);
		double expand(double& p, double& A);
		double shrink(double& x, double& A);
};

#endif
