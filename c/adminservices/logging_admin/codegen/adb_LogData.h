

        #ifndef ADB_LOGDATA_H
        #define ADB_LOGDATA_H

       /**
        * adb_LogData.h
        *
        * This file was auto-generated from WSDL
        * by the Apache Axis2/Java version: #axisVersion# #today#
        */

       /**
        *  adb_LogData class
        */

        
          #include "adb_AppenderData.h"
          
          #include "adb_LoggerData.h"
          
          #include "adb_AppenderData.h"
          
          #include "adb_LoggerData.h"
          

        #include <stdio.h>
        #include <axiom.h>
        #include <axis2_util.h>
        #include <axiom_soap.h>
        #include <axis2_client.h>

        #include "axis2_extension_mapper.h"

        #ifdef __cplusplus
        extern "C"
        {
        #endif

        #define ADB_DEFAULT_DIGIT_LIMIT 1024
        #define ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT 64
        

        typedef struct adb_LogData adb_LogData_t;

        
        

        /******************************* Create and Free functions *********************************/

        /**
         * Constructor for creating adb_LogData_t
         * @param env pointer to environment struct
         * @return newly created adb_LogData_t object
         */
        adb_LogData_t* AXIS2_CALL
        adb_LogData_create(
            const axutil_env_t *env );

        /**
         * Wrapper for the "free" function, will invoke the extension mapper instead
         * @param  _LogData adb_LogData_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_free (
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

        /**
         * Free adb_LogData_t object
         * @param  _LogData adb_LogData_t object to free
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_free_obj (
            adb_LogData_t* _LogData,
            const axutil_env_t *env);



        /********************************** Getters and Setters **************************************/
        /******** Deprecated for array types, Use 'Getters and Setters for Arrays' instead ***********/
        

        /**
         * Getter for appenderData. Deprecated for array types, Use adb_LogData_get_appenderData_at instead
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return Array of adb_AppenderData_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_LogData_get_appenderData(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

        /**
         * Setter for appenderData.Deprecated for array types, Use adb_LogData_set_appenderData_at
         * or adb_LogData_add_appenderData instead.
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @param arg_appenderData Array of adb_AppenderData_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_set_appenderData(
            adb_LogData_t* _LogData,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_appenderData);

        /**
         * Resetter for appenderData
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_reset_appenderData(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

        
        

        /**
         * Getter for logFile. 
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_LogData_get_logFile(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

        /**
         * Setter for logFile.
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @param arg_logFile axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_set_logFile(
            adb_LogData_t* _LogData,
            const axutil_env_t *env,
            const axis2_char_t*  arg_logFile);

        /**
         * Resetter for logFile
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_reset_logFile(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

        
        

        /**
         * Getter for logLevel. 
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_LogData_get_logLevel(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

        /**
         * Setter for logLevel.
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @param arg_logLevel axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_set_logLevel(
            adb_LogData_t* _LogData,
            const axutil_env_t *env,
            const axis2_char_t*  arg_logLevel);

        /**
         * Resetter for logLevel
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_reset_logLevel(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

        
        

        /**
         * Getter for logPattern. 
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_LogData_get_logPattern(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

        /**
         * Setter for logPattern.
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @param arg_logPattern axis2_char_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_set_logPattern(
            adb_LogData_t* _LogData,
            const axutil_env_t *env,
            const axis2_char_t*  arg_logPattern);

        /**
         * Resetter for logPattern
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_reset_logPattern(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

        
        

        /**
         * Getter for loggerData. Deprecated for array types, Use adb_LogData_get_loggerData_at instead
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return Array of adb_LoggerData_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_LogData_get_loggerData(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

        /**
         * Setter for loggerData.Deprecated for array types, Use adb_LogData_set_loggerData_at
         * or adb_LogData_add_loggerData instead.
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @param arg_loggerData Array of adb_LoggerData_t*s.
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_set_loggerData(
            adb_LogData_t* _LogData,
            const axutil_env_t *env,
            axutil_array_list_t*  arg_loggerData);

        /**
         * Resetter for loggerData
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_reset_loggerData(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

        
        

        /**
         * Getter for selectedAppenderData. 
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return adb_AppenderData_t*
         */
        adb_AppenderData_t* AXIS2_CALL
        adb_LogData_get_selectedAppenderData(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

        /**
         * Setter for selectedAppenderData.
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @param arg_selectedAppenderData adb_AppenderData_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_set_selectedAppenderData(
            adb_LogData_t* _LogData,
            const axutil_env_t *env,
            adb_AppenderData_t*  arg_selectedAppenderData);

        /**
         * Resetter for selectedAppenderData
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_reset_selectedAppenderData(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

        
        

        /**
         * Getter for selectedLoggerData. 
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return adb_LoggerData_t*
         */
        adb_LoggerData_t* AXIS2_CALL
        adb_LogData_get_selectedLoggerData(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

        /**
         * Setter for selectedLoggerData.
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @param arg_selectedLoggerData adb_LoggerData_t*
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_set_selectedLoggerData(
            adb_LogData_t* _LogData,
            const axutil_env_t *env,
            adb_LoggerData_t*  arg_selectedLoggerData);

        /**
         * Resetter for selectedLoggerData
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_reset_selectedLoggerData(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

        
        /****************************** Getters and Setters For Arrays **********************************/
        /************ Array Specific Operations: get_at, set_at, add, remove_at, sizeof *****************/

        /**
         * E.g. use of get_at, set_at, add and sizeof
         *
         * for(i = 0; i < adb_element_sizeof_property(adb_object, env); i ++ )
         * {
         *     // Getting ith value to property_object variable
         *     property_object = adb_element_get_property_at(adb_object, env, i);
         *
         *     // Setting ith value from property_object variable
         *     adb_element_set_property_at(adb_object, env, i, property_object);
         *
         *     // Appending the value to the end of the array from property_object variable
         *     adb_element_add_property(adb_object, env, property_object);
         *
         *     // Removing the ith value from an array
         *     adb_element_remove_property_at(adb_object, env, i);
         *     
         * }
         *
         */

        
        
        /**
         * Get the ith element of appenderData.
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith adb_AppenderData_t* of the array
         */
        adb_AppenderData_t* AXIS2_CALL
        adb_LogData_get_appenderData_at(
                adb_LogData_t* _LogData,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of appenderData. (If the ith already exist, it will be replaced)
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_appenderData element to set adb_AppenderData_t* to the array
         * @return ith adb_AppenderData_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_set_appenderData_at(
                adb_LogData_t* _LogData,
                const axutil_env_t *env, int i,
                adb_AppenderData_t* arg_appenderData);


        /**
         * Add to appenderData.
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @param arg_appenderData element to add adb_AppenderData_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_add_appenderData(
                adb_LogData_t* _LogData,
                const axutil_env_t *env,
                adb_AppenderData_t* arg_appenderData);

        /**
         * Get the size of the appenderData array.
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct.
         * @return the size of the appenderData array.
         */
        int AXIS2_CALL
        adb_LogData_sizeof_appenderData(
                    adb_LogData_t* _LogData,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of appenderData.
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_remove_appenderData_at(
                adb_LogData_t* _LogData,
                const axutil_env_t *env, int i);

        
        
        /**
         * Get the ith element of loggerData.
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @return ith adb_LoggerData_t* of the array
         */
        adb_LoggerData_t* AXIS2_CALL
        adb_LogData_get_loggerData_at(
                adb_LogData_t* _LogData,
                const axutil_env_t *env, int i);

        /**
         * Set the ith element of loggerData. (If the ith already exist, it will be replaced)
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @param i index of the item to return
         * @param arg_loggerData element to set adb_LoggerData_t* to the array
         * @return ith adb_LoggerData_t* of the array
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_set_loggerData_at(
                adb_LogData_t* _LogData,
                const axutil_env_t *env, int i,
                adb_LoggerData_t* arg_loggerData);


        /**
         * Add to loggerData.
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @param arg_loggerData element to add adb_LoggerData_t* to the array
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_add_loggerData(
                adb_LogData_t* _LogData,
                const axutil_env_t *env,
                adb_LoggerData_t* arg_loggerData);

        /**
         * Get the size of the loggerData array.
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct.
         * @return the size of the loggerData array.
         */
        int AXIS2_CALL
        adb_LogData_sizeof_loggerData(
                    adb_LogData_t* _LogData,
                    const axutil_env_t *env);

        /**
         * Remove the ith element of loggerData.
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @param i index of the item to remove
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_remove_loggerData_at(
                adb_LogData_t* _LogData,
                const axutil_env_t *env, int i);

        


        /******************************* Checking and Setting NIL values *********************************/
        /* Use 'Checking and Setting NIL values for Arrays' to check and set nil for individual elements */

        /**
         * NOTE: set_nil is only available for nillable properties
         */

        

        /**
         * Check whether appenderData is nill
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_LogData_is_appenderData_nil(
                adb_LogData_t* _LogData,
                const axutil_env_t *env);


        
        /**
         * Set appenderData to nill (currently the same as reset)
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_set_appenderData_nil(
                adb_LogData_t* _LogData,
                const axutil_env_t *env);
        

        /**
         * Check whether logFile is nill
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_LogData_is_logFile_nil(
                adb_LogData_t* _LogData,
                const axutil_env_t *env);


        
        /**
         * Set logFile to nill (currently the same as reset)
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_set_logFile_nil(
                adb_LogData_t* _LogData,
                const axutil_env_t *env);
        

        /**
         * Check whether logLevel is nill
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_LogData_is_logLevel_nil(
                adb_LogData_t* _LogData,
                const axutil_env_t *env);


        
        /**
         * Set logLevel to nill (currently the same as reset)
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_set_logLevel_nil(
                adb_LogData_t* _LogData,
                const axutil_env_t *env);
        

        /**
         * Check whether logPattern is nill
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_LogData_is_logPattern_nil(
                adb_LogData_t* _LogData,
                const axutil_env_t *env);


        
        /**
         * Set logPattern to nill (currently the same as reset)
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_set_logPattern_nil(
                adb_LogData_t* _LogData,
                const axutil_env_t *env);
        

        /**
         * Check whether loggerData is nill
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_LogData_is_loggerData_nil(
                adb_LogData_t* _LogData,
                const axutil_env_t *env);


        
        /**
         * Set loggerData to nill (currently the same as reset)
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_set_loggerData_nil(
                adb_LogData_t* _LogData,
                const axutil_env_t *env);
        

        /**
         * Check whether selectedAppenderData is nill
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_LogData_is_selectedAppenderData_nil(
                adb_LogData_t* _LogData,
                const axutil_env_t *env);


        
        /**
         * Set selectedAppenderData to nill (currently the same as reset)
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_set_selectedAppenderData_nil(
                adb_LogData_t* _LogData,
                const axutil_env_t *env);
        

        /**
         * Check whether selectedLoggerData is nill
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_LogData_is_selectedLoggerData_nil(
                adb_LogData_t* _LogData,
                const axutil_env_t *env);


        
        /**
         * Set selectedLoggerData to nill (currently the same as reset)
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_set_selectedLoggerData_nil(
                adb_LogData_t* _LogData,
                const axutil_env_t *env);
        
        /*************************** Checking and Setting 'NIL' values in Arrays *****************************/

        /**
         * NOTE: You may set this to remove specific elements in the array
         *       But you can not remove elements, if the specific property is declared to be non-nillable or sizeof(array) < minOccurs
         */
        
        /**
         * Check whether appenderData is nill at i
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_LogData_is_appenderData_nil_at(
                adb_LogData_t* _LogData,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set appenderData to nill at i
         * @param  _LogData _ adb_LogData_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_set_appenderData_nil_at(
                adb_LogData_t* _LogData, 
                const axutil_env_t *env, int i);

        
        /**
         * Check whether loggerData is nill at i
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct.
         * @param i index of the item to return.
         * @return AXIS2_TRUE if the element is nil or AXIS2_FALSE otherwise
         */
        axis2_bool_t AXIS2_CALL
        adb_LogData_is_loggerData_nil_at(
                adb_LogData_t* _LogData,
                const axutil_env_t *env, int i);
 
       
        /**
         * Set loggerData to nill at i
         * @param  _LogData _ adb_LogData_t object
         * @param env pointer to environment struct.
         * @param i index of the item to set.
         * @return AXIS2_SUCCESS on success, or AXIS2_FAILURE otherwise.
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_set_loggerData_nil_at(
                adb_LogData_t* _LogData, 
                const axutil_env_t *env, int i);

        

        /**************************** Serialize and Deserialize functions ***************************/
        /*********** These functions are for use only inside the generated code *********************/

        
        /**
         * Wrapper for the deserialization function, will invoke the extension mapper instead
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs, 
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_deserialize(
            adb_LogData_t* _LogData,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);

        /**
         * Deserialize an XML to adb objects
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @param dp_parent double pointer to the parent node to deserialize
         * @param dp_is_early_node_valid double pointer to a flag (is_early_node_valid?)
         * @param dont_care_minoccurs Dont set errors on validating minoccurs,
         *              (Parent will order this in a case of choice)
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axis2_status_t AXIS2_CALL
        adb_LogData_deserialize_obj(
            adb_LogData_t* _LogData,
            const axutil_env_t *env,
            axiom_node_t** dp_parent,
            axis2_bool_t *dp_is_early_node_valid,
            axis2_bool_t dont_care_minoccurs);
                            
            

       /**
         * Declare namespace in the most parent node 
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @param parent_element parent element
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index pointer to an int which contain the next namespace index
         */
       void AXIS2_CALL
       adb_LogData_declare_parent_namespaces(
                    adb_LogData_t* _LogData,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index);

        

        /**
         * Wrapper for the serialization function, will invoke the extension mapper instead
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @param LogData_om_node node to serialize from
         * @param LogData_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_LogData_serialize(
            adb_LogData_t* _LogData,
            const axutil_env_t *env,
            axiom_node_t* LogData_om_node, axiom_element_t *LogData_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Serialize to an XML from the adb objects
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @param LogData_om_node node to serialize from
         * @param LogData_om_element parent element to serialize from
         * @param tag_closed whether the parent tag is closed or not
         * @param namespaces hash of namespace uri to prefix
         * @param next_ns_index an int which contain the next namespace index
         * @return AXIS2_SUCCESS on success, else AXIS2_FAILURE
         */
        axiom_node_t* AXIS2_CALL
        adb_LogData_serialize_obj(
            adb_LogData_t* _LogData,
            const axutil_env_t *env,
            axiom_node_t* LogData_om_node, axiom_element_t *LogData_om_element, int tag_closed, axutil_hash_t *namespaces, int *next_ns_index);

        /**
         * Check whether the adb_LogData is a particle class (E.g. group, inner sequence)
         * @return whether this is a particle class.
         */
        axis2_bool_t AXIS2_CALL
        adb_LogData_is_particle();

        /******************************* Alternatives for Create and Free functions *********************************/

        

        /**
         * Constructor for creating adb_LogData_t
         * @param env pointer to environment struct
         * @param _appenderData axutil_array_list_t*
         * @param _logFile axis2_char_t*
         * @param _logLevel axis2_char_t*
         * @param _logPattern axis2_char_t*
         * @param _loggerData axutil_array_list_t*
         * @param _selectedAppenderData adb_AppenderData_t*
         * @param _selectedLoggerData adb_LoggerData_t*
         * @return newly created adb_LogData_t object
         */
        adb_LogData_t* AXIS2_CALL
        adb_LogData_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _appenderData,
                axis2_char_t* _logFile,
                axis2_char_t* _logLevel,
                axis2_char_t* _logPattern,
                axutil_array_list_t* _loggerData,
                adb_AppenderData_t* _selectedAppenderData,
                adb_LoggerData_t* _selectedLoggerData);

        


                /**
                 * Free adb_LogData_t object and return the property value.
                 * You can use this to free the adb object as returning the property value. If there are
                 * many properties, it will only return the first property. Other properties will get freed with the adb object.
                 * @param  _LogData adb_LogData_t object to free
                 * @param env pointer to environment struct
                 * @return the property value holded by the ADB object, if there are many properties only returns the first.
                 */
                axutil_array_list_t* AXIS2_CALL
                adb_LogData_free_popping_value(
                        adb_LogData_t* _LogData,
                        const axutil_env_t *env);
            

        /******************************* get the value by the property number  *********************************/
        /************NOTE: This method is introduced to resolve a problem in unwrapping mode *******************/

        
        

        /**
         * Getter for appenderData by property number (1)
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return Array of adb_AppenderData_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_LogData_get_property1(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

    
        

        /**
         * Getter for logFile by property number (2)
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_LogData_get_property2(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

    
        

        /**
         * Getter for logLevel by property number (3)
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_LogData_get_property3(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

    
        

        /**
         * Getter for logPattern by property number (4)
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return axis2_char_t*
         */
        axis2_char_t* AXIS2_CALL
        adb_LogData_get_property4(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

    
        

        /**
         * Getter for loggerData by property number (5)
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return Array of adb_LoggerData_t*s.
         */
        axutil_array_list_t* AXIS2_CALL
        adb_LogData_get_property5(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

    
        

        /**
         * Getter for selectedAppenderData by property number (6)
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return adb_AppenderData_t*
         */
        adb_AppenderData_t* AXIS2_CALL
        adb_LogData_get_property6(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

    
        

        /**
         * Getter for selectedLoggerData by property number (7)
         * @param  _LogData adb_LogData_t object
         * @param env pointer to environment struct
         * @return adb_LoggerData_t*
         */
        adb_LoggerData_t* AXIS2_CALL
        adb_LogData_get_property7(
            adb_LogData_t* _LogData,
            const axutil_env_t *env);

    
     #ifdef __cplusplus
     }
     #endif

     #endif /* ADB_LOGDATA_H */
    
