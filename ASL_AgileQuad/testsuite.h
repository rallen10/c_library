/** @file
 *	@brief MAVLink comm protocol testsuite generated from ASL_AgileQuad.xml
 *	@see http://qgroundcontrol.org/mavlink/
 */
#ifndef ASL_AGILEQUAD_TESTSUITE_H
#define ASL_AGILEQUAD_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_ASL_AgileQuad(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_common(system_id, component_id, last_msg);
	mavlink_test_ASL_AgileQuad(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_poly_coefs(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_poly_coefs_t packet_in = {
		17.0,45.0,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0
    };
	mavlink_poly_coefs_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.del_t = packet_in.del_t;
        	packet1.p_0 = packet_in.p_0;
        	packet1.p_1 = packet_in.p_1;
        	packet1.p_2 = packet_in.p_2;
        	packet1.p_3 = packet_in.p_3;
        	packet1.p_4 = packet_in.p_4;
        	packet1.p_5 = packet_in.p_5;
        	packet1.p_6 = packet_in.p_6;
        	packet1.p_7 = packet_in.p_7;
        	packet1.p_8 = packet_in.p_8;
        	packet1.p_9 = packet_in.p_9;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_poly_coefs_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_poly_coefs_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_poly_coefs_pack(system_id, component_id, &msg , packet1.del_t , packet1.p_0 , packet1.p_1 , packet1.p_2 , packet1.p_3 , packet1.p_4 , packet1.p_5 , packet1.p_6 , packet1.p_7 , packet1.p_8 , packet1.p_9 );
	mavlink_msg_poly_coefs_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_poly_coefs_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.del_t , packet1.p_0 , packet1.p_1 , packet1.p_2 , packet1.p_3 , packet1.p_4 , packet1.p_5 , packet1.p_6 , packet1.p_7 , packet1.p_8 , packet1.p_9 );
	mavlink_msg_poly_coefs_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_poly_coefs_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_poly_coefs_send(MAVLINK_COMM_1 , packet1.del_t , packet1.p_0 , packet1.p_1 , packet1.p_2 , packet1.p_3 , packet1.p_4 , packet1.p_5 , packet1.p_6 , packet1.p_7 , packet1.p_8 , packet1.p_9 );
	mavlink_msg_poly_coefs_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ASL_AgileQuad(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_poly_coefs(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // ASL_AGILEQUAD_TESTSUITE_H
