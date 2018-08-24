#!/usr/bin/python

import sys, os, json, uuid

protocol_version = 0.1

json_message = {'Virtue-protocol-version': protocol_version,
                           'request': [ uuid.uuid4().hex, 'discovery', '*' ]}

msg_string = json.dumps(json_message, sort_keys = True)

print json.loads(json.dumps(json_message, sort_keys = True))

discover  =  {'Virtue-protocol-version': 0.1,
              'reply': ["cb44fb69cc20428b8a6467f9b7f459f5",
                        'discovery',
                        [['Kernel Sysfs Sensor',
                          'db45b0a9-69eb-4c8d-ba87-e9385827be9b'],
                         ['Kernel LSOF Sensor',
                          '29efdcd0-f340-4d05-92de-c28a7e41befe'],
                         ['Kernel PS Sensor',
                          'ca79be80-2936-415c-90fc-875ad90f48a4']]]}


discover2 = {"Virtue-protocol-version": 0.1,
             'reply': ['0e0d98ce00bd45d4875aa00cf522c13b',
                       'discovery',
                       [['Kernel Sysfs Sensor',
                         'b7de65e9-24ea-485b-8819-07e7e480546c'],
                        ['Kernel LSOF Sensor',
                         'fe45bdeb-c4e4-4a65-8a2a-ebee92e29ceb'],
                        ['Kernel PS Sensor',
                         '06bf9f34-d30d-4559-9b26-921edaf301fa']]]}

#print json.loads(json.dumps(discover, sort_keys = True))
print json.loads(json.dumps(discover2, sort_keys = True))
