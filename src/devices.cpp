#include <Rcpp.h>

#define VIENNACL_WITH_OPENCL 1

#include <viennacl/ocl/backend.hpp>
#include <viennacl/ocl/platform.hpp>

// [[Rcpp::export]]
bool device_info()
{
    // platforms
    std::vector<viennacl::ocl::platform> plfs = viennacl::ocl::get_platforms();
    for(std::size_t i = 0; i < plfs.size(); i++)
    {
        Rcpp::Rcout << "***** platform " << i << " *****\n";
        Rcpp::Rcout << plfs[i].info() << std::endl;

        std::vector<viennacl::ocl::device> devs = plfs[i].devices(CL_DEVICE_TYPE_ALL);
        for(std::size_t j = 0; j < devs.size(); j++)
        {
            Rcpp::Rcout << "** device " << j << " **\n";
            Rcpp::Rcout << devs[j].info() << std::endl;
        }

        Rcpp::Rcout << std::endl;
    }

    return true;
}
