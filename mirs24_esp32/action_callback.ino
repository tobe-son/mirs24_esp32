/*
rcl_ret_t handle_goal(rclc_action_goal_handle_t * goal_handle,void * context){
  (void) context;

  mirs_msgs__action__Trigger_SendGoal_Request * req =
    (mirs_msgs__action__Trigger_SendGoal_Request *) goal_handle->ros_goal_request;

  //printf("Goal %d accepted\n", req->goal.order);
  
  pthread_t thread;
  pthread_create(&thread, NULL, Trigger_worker, (void *)goal_handle);
  return RCL_RET_ACTION_GOAL_ACCEPTED;
}

bool handle_cancel(rclc_action_goal_handle_t * goal_handle, void *context)
{
  (void) context;
  (void) goal_handle;

  return true; // キャンセルを許可
}

void* Trigger_worker(void* args){

  (void) args;
  rclc_action_goal_handle_t * goal_handle = (rclc_action_goal_handle_t *) args;
  rcl_action_goal_state_t goal_state;

  mirs_msgs__action__Trigger_SendGoal_Request * req =
    (mirs_msgs__action__Trigger_SendGoal_Request *) goal_handle->ros_goal_request;

  mirs_msgs__action__Trigger_Result * response;
  //mirs__action__Trigger_FeedbackMessage feedback;

  goal_state = GOAL_STATE_SUCCEEDED;

  response->success = true;

  rcl_ret_t rc;
  do {
    rc = rclc_action_send_result(goal_handle, goal_state, &response);
    usleep(1e6);
  } while (rc != RCL_RET_OK);

  pthread_exit(NULL);
}
*/
