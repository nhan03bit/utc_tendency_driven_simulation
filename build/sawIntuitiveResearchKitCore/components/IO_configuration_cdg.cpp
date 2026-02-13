// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/IO_configuration.cdg

#include <sawIntuitiveResearchKit/IO_configuration.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 9 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(dvrk_IO_configurationProxy);

dvrk::IO_configuration::IO_configuration(void):
    name("")
    , IO()
    , IO_file()
{}

dvrk::IO_configuration::IO_configuration(const IO_configuration & other):
    name(other.name)
    , IO(other.IO)
    , IO_file(other.IO_file)
{}

dvrk::IO_configuration & dvrk::IO_configuration::operator = (const IO_configuration & other)
{
    name = other.name;
    IO = other.IO;
    IO_file = other.IO_file;
    return *this;
}

dvrk::IO_configuration::~IO_configuration(void){}


void dvrk::IO_configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->name);
    cmnSerializeRaw(outputStream__cdg, this->IO);
    cmnSerializeRaw(outputStream__cdg, this->IO_file);
}


void dvrk::IO_configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->name);
    cmnDeSerializeRaw(inputStream__cdg, this->IO);
    cmnDeSerializeRaw(inputStream__cdg, this->IO_file);
}


void dvrk::IO_configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void dvrk::IO_configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<dvrk::IO_configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<dvrk::IO_configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 14 */
/* source line: 21 */
/* source line: 27 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const dvrk::IO_configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, dvrk::IO_configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void dvrk::IO_configuration::Copy(const dvrk::IO_configuration & source__cdg) {
    cmnData<std::string >::Copy(this->name, source__cdg.name);
    cmnData<std::string >::Copy(this->IO, source__cdg.IO);
    cmnData<std::string >::Copy(this->IO_file, source__cdg.IO_file);
}
void dvrk::IO_configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->name, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->IO, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->IO_file, outputStream__cdg);
}
void dvrk::IO_configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->IO, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->IO_file, inputStream__cdg, localFormat, remoteFormat);
}
void dvrk::IO_configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->IO, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->IO_file, outputStream__cdg, delimiter__cdg);
}
std::string dvrk::IO_configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->name, delimiter__cdg, prefix__cdg + "name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->IO, delimiter__cdg, prefix__cdg + "IO");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->IO_file, delimiter__cdg, prefix__cdg + "IO_file");
    return description__cdg.str();
}
void dvrk::IO_configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::IO_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::IO_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->IO, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::IO_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->IO_file, inputStream__cdg, delimiter__cdg);
}
std::string dvrk::IO_configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "dvrk::IO_configuration" << std::endl;
    description__cdg << "  name:" << cmnData<std::string >::HumanReadable(this->name);
    description__cdg << "  IO:" << cmnData<std::string >::HumanReadable(this->IO);
    description__cdg << "  IO_file:" << cmnData<std::string >::HumanReadable(this->IO_file);
    return description__cdg.str();
}
bool dvrk::IO_configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->name)
           && cmnData<std::string >::ScalarNumberIsFixed(this->IO)
           && cmnData<std::string >::ScalarNumberIsFixed(this->IO_file)
    ;
}
size_t dvrk::IO_configuration::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->name)
           + cmnData<std::string >::ScalarNumber(this->IO)
           + cmnData<std::string >::ScalarNumber(this->IO_file)
    ;
}
std::string dvrk::IO_configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->name, index_cdg - baseIndex__cdg, prefix__cdg + "name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->IO);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->IO, index_cdg - baseIndex__cdg, prefix__cdg + "IO");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->IO_file);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->IO_file, index_cdg - baseIndex__cdg, prefix__cdg + "IO_file");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: dvrk::IO_configuration index out of range"));
    return "";
}
double dvrk::IO_configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->IO);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->IO, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->IO_file);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->IO_file, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: dvrk::IO_configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<dvrk::IO_configuration >::SerializeText(const dvrk::IO_configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void dvrk::IO_configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->name, jsonValue["name"]);
    cmnDataJSON<std::string >::SerializeText(this->IO, jsonValue["IO"]);
    cmnDataJSON<std::string >::SerializeText(this->IO_file, jsonValue["IO_file"]);
}
template<>
void cmnDataJSON<dvrk::IO_configuration >::DeSerializeText(dvrk::IO_configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void dvrk::IO_configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["name"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->name, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < name");
        }
    };
    field__cdg = jsonValue["IO"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->IO, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < IO");
        }
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: IO");
    };
    field__cdg = jsonValue["IO_file"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->IO_file, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < IO_file");
        }
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: IO_file");
    };
}
#endif // CISST_HAS_JSON

