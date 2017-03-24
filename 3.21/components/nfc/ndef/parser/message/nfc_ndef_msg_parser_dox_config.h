/**
 *
 * @defgroup nfc_ndef_msg_parser_config NFC NDEF message parser module configuration
 * @{
 * @ingroup nfc_ndef_msg_parser
 */
/** @brief  *
 *  Set to 1 to activate.
 *
 * @note This is an NRF_CONFIG macro.
 */
#define NFC_NDEF_MSG_PARSER_ENABLED

/** @brief Enables logging in the module. *
 *  Set to 1 to activate.
 *
 * @note This is an NRF_CONFIG macro.
 */
#define NFC_NDEF_MSG_PARSER_LOG_ENABLED

/** @brief Default Severity level *
 *  Following options are avaiable:
 * - 0 - Off
 * - 1 - Error
 * - 2 - Warning
 * - 3 - Info
 * - 4 - Debug
 *
 * @note This is an NRF_CONFIG macro.
 */
#define NFC_NDEF_MSG_PARSER_LOG_LEVEL


/** @brief ANSI escape code prefix. *
 *  Following options are avaiable:
 * - 0 - Default
 * - 1 - Black
 * - 2 - Red
 * - 3 - Green
 * - 4 - Yellow
 * - 5 - Blue
 * - 6 - Magenta
 * - 7 - Cyan
 * - 8 - White
 *
 * @note This is an NRF_CONFIG macro.
 */
#define NFC_NDEF_MSG_PARSER_INFO_COLOR




/** @} */
